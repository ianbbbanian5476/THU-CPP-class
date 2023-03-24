#include <iostream>
using namespace std;

int main()
{
    int gpa;
    cin >> gpa;

    switch (gpa)
    {
    case 4:
        cout << "excellent student" << endl;
        // break;

    case 3:
        cout << "good student" << endl;
        break;

    case 2:
        cout << "satisfactory" << endl;
        break;

    case 1:
        cout << "score = 50" << endl;
        break;

    default:
        cout << "are you a fool or a genius" << endl;
        break;
    }
}