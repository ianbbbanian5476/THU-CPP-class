#include <iostream>
using namespace std;

int main()
{
    int gpa;
    cin >> gpa;

    if (gpa == 4)
    {
        cout << "excellent student" << endl;
    }
    else if (gpa == 3)
    {
        cout << "good student" << endl;
    }
    else if (gpa == 2)
    {
        cout << "satisfactory" << endl;
    }
    else if (gpa == 1)
    {
        cout << "score = 50" << endl;
    }
    else
    {
        cout << "are you a fool or a genius" << endl;
    }
}