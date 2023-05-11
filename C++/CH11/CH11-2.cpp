#include <iostream>

using namespace std;

// 鏈結串列節點
struct Node
{
    int data;
    Node *next;
};

// 堆疊類別
class Stack
{
private:
    Node *top; // 堆疊頂部節點指標

public:
    // 建構函式
    Stack()
    {
        top = NULL;
    }

    // 檢查堆疊是否為空
    bool isEmpty()
    {
        return (top == NULL);
    }

    // 將元素推入堆疊
    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "已將 " << value << " 推入堆疊" << endl;
    }

    // 從堆疊彈出元素
    void pop()
    {
        if (isEmpty())
        {
            cout << "堆疊已經空了" << endl;
            return;
        }
        Node *temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp;
        cout << "已彈出 " << poppedValue << " 從堆疊" << endl;
    }

    // 取得堆疊頂部元素
    int peek()
    {
        if (isEmpty())
        {
            cout << "堆疊是空的" << endl;
            return -1;
        }
        return top->data;
    }
};

int main()
{
    Stack stack;

    // 測試推入元素
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // 測試彈出元素
    stack.pop();

    // 測試取得頂部元素
    cout << "堆疊頂部元素為: " << stack.peek() << endl;

    return 0;
}
