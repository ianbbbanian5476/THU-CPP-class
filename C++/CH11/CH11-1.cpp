#include <iostream>

using namespace std;

// 佇列節點的資料結構
struct Node
{
    int data;
    Node *next;
};

// 佇列的資料結構
class Queue
{
private:
    Node *head;
    Node *tail;

public:
    // 初始化佇列
    Queue()
    {
        head = NULL;
        tail = NULL;
    }

    // 將一個元素加入佇列的尾端
    void push(int data)
    {
        Node *newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;

        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // 將佇列的第一個元素刪除並返回其值
    int pop()
    {
        if (head == NULL)
        {
            cout << "Queue is empty!" << endl;
            return -1;
        }

        Node *temp = head;
        int data = temp->data;

        head = head->next;
        delete temp;

        if (head == NULL)
        {
            tail = NULL;
        }

        return data;
    }
};

int main()
{
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    return 0;
}
