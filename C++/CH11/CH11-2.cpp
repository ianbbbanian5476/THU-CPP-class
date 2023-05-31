#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class Stack
{
private:
    Node *top; 

public:
    Stack()
    {
        top = NULL;
    }

    bool isEmpty()
    {
        return (top == NULL);
    }

    void push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "已將 " << value << " 推入堆疊" << endl;
    }

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

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();

    cout << "堆疊頂部元素為: " << stack.peek() << endl;

    return 0;
}
