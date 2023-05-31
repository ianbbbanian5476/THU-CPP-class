
# import for database
import sqlite3

# connect to database
connect = sqlite3.connect('game.db')
cursor = connect.cursor()

def init_games():

    # 建立資料表
    cursor.execute("CREATE TABLE reservation \
                   (id integer primary key, \
                    game text, \
                    user_id text)")
    connect.commit()

    # 填入遊戲
    cursor.execute("INSERT INTO reservation (game) \
                    VALUES ('小瓦隆')")
    cursor.execute("INSERT INTO reservation (game) \
                    VALUES ('雨聲')")
    cursor.execute("INSERT INTO reservation (game) \
                    VALUES ('龍捲風')")
    connect.commit()

def handle_msg(user_id, msg):

    # implement reservation
    if msg == '想看遊戲種類':
        ##1.用SQL查詢所有未被預約的遊戲
        results = connect.execute("SELECT * from reservation")
        games = results.fetchall()
        game_text = '尚可預約遊戲：\n'
        for game in games:
            if game[2] == None:
                game_text = game_text + game[1] + '\n'
        print(game_text)
        
    elif msg[0:3] == '想預約':
        game_name = msg[3:]

        ##2.取出所有遊戲，放到games變數裡面
        results = connect.execute("SELECT * from reservation")
        games = results.fetchall()
        found = False
        for game in games:
            if game[1] == game_name:
                found = True
                if game[2] is None:

                    ##3.將預約的遊戲 user_id設成此使用者
                    sql = f'''UPDATE reservation
                            set user_id = "{user_id}"
                            where id = {game[0]}'''
                    results = connect.execute(sql)
                    connect.commit()                           # 更新資料庫
                    print('已為您預約完成：' + game_name)
                else:
                    print('此遊戲已被預約！抱歉')
        if found == False:
            print('並沒有此款遊戲')
            
    elif msg == '想取消預約':
        ##4.將所有此使用者預約之遊戲取出，放到games變數內
        results = connect.execute(f"SELECT * from reservation")
        games = results.fetchall()
        canceled_game_id = []
        found = False
        for game in games:
            if game[2] == user_id:
                canceled_game_id.append(game[0])
        for game in canceled_game_id:

            ## 將此遊戲user_id設回None
            sql = f'''UPDATE reservation
                    set user_id = NULL
                    where id = {game}'''
            results = connect.execute(sql)
            connect.commit()        
            found =  True
        if found == True:
            print('已為您取消預約')
            
    else:
        print('您好！\n請問需要什麼樣的服務？')


'''  -------------------------------
              主程式
-------------------------------- '''

init_games()
user_id = '小明'

while True:
    msg = input('輸入訊息：')
    if msg == '結束':
        cursor.close()
        connect.close() 
        break
    handle_msg(user_id, msg)