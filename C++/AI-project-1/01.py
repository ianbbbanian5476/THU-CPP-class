game = {'小瓦隆' : None, '雨聲' : None,'龍捲風' : None}

while True:
    try:
        customer_id = "123abc"
        command = input('Enter to book:')

        if command == "想看遊戲種類":
            print('尚可預約的遊戲:')
            for game_elm, check_id in game.items():
                if check_id == None:
                    print(game_elm)
        
        elif command[0:3] == '想預約':
            if command[3:] in game:
                if game[command[3:]] == None:
                    game[command[3:]] = customer_id
                    print('已為您完成預約')
                else:
                    print('此遊戲已被預約')
            else:
                print('不存在此遊戲')
        
        elif command == "想取消預約":
            for game_id, user_id in game.items():
                if user_id == customer_id:
                    game[game_id] = None
                    print('已為您取消預約')
        
        elif command == '結束':
            break

        else:
            print('您好！請問需要什麼樣的服務？')
        print('------------------')
    
    except:
        print('您好！請問需要什麼樣的服務？')
        continue
