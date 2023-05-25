#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void selectionSort(vector<T> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    vector<int> integers;
    vector<float> floats;
    vector<string> strings;

    while (true)
    {
        string input;
        cin >> input;

        if (input == "stop")
        {
            break;
        }

        if (input.find('.') != string::npos)
        {
            try
            {
                float num = stof(input);
                floats.push_back(num);
            }
            catch (invalid_argument &)
            {
                strings.push_back(input);
            }
        }
        else
        {
            try
            {
                int num = stoi(input);
                integers.push_back(num);
            }
            catch (invalid_argument &)
            {
                strings.push_back(input);
            }
        }
    }

    selectionSort(integers);
    selectionSort(floats);
    selectionSort(strings);

    cout << "Sorted Integers:";
    for (int num : integers)
    {
        cout << " " << num;
    }
    cout << endl;

    cout << "Sorted Floats:";
    for (float num : floats)
    {
        cout << " " << num;
    }
    cout << endl;

    cout << "Sorted Strings:";
    for (const string &str : strings)
    {
        cout << " " << str;
    }
    cout << endl;

    return 0;
}
