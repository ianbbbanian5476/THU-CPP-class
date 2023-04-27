#include <iostream>
#include <cstring>
using namespace std;

int *num_to_array(string num, int &len)
{
    len = num.length();
    int *arr = new int[len];

    for (int i = 0; i < len; i++)
    {
        arr[i] = num[i] - '0';
    }

    for (int i = 0; i < len / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }

    return arr;
}

int main()
{
    string num1, num2;
    while (cin >> num1 >> num2)
    {
        if (num1 == "0" && num2 == "0")
            break;
        int carry = 0, temp = 0;
        int num_array1_size, num_array2_size;
        int *num_array1 = num_to_array(num1, num_array1_size);
        int *num_array2 = num_to_array(num2, num_array2_size);
        for (int index = 0; index < max(num_array1_size, num_array2_size); index++)
        {
            int d1, d2;
            if (index < num_array1_size)
            {
                d1 = num_array1[index];
            }
            else
            {
                d1 = 0;
            }
            if (index < num_array2_size)
            {
                d2 = num_array2[index];
            }
            else
            {
                d2 = 0;
            }
            int r = d1 + d2 + temp;
            if (r >= 10)
            {
                temp = 1;
                carry++;
            }
            else
            {
                temp = 0;
            }
        }
        if (carry == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if (carry == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << carry << " carry operations." << endl;
        }
        delete[] num_array1, num_array2;
    }
    return 0;
}