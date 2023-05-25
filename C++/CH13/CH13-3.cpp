#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int binarySearch(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr;
    string input;
    getline(cin, input);

    istringstream iss(input);
    int num;
    while (iss >> num)
    {
        arr.push_back(num);
    }

    int target;
    while (cin >> target)
    {
        int index = binarySearch(arr, target);

        if (index != -1)
        {
            cout << "index:" << index << endl;
        }
        else
        {
            cout << "not exist" << endl;
        }
    }

    return 0;
}
