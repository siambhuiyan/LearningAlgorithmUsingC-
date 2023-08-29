#include <iostream>
using namespace std;

bool sortedOrNot(int arr[], int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }

    // check
    if (arr[0] > arr[1])
        return false;
    // recursive call
    return (sortedOrNot(arr + 1, n - 1));
}

bool backwardCheck(int arr[], int n)
{
    // base
    if (n == 0 || n == 1)
    {
        return true;
    }
    // check
    if (arr[n] < arr[n - 1])
    {
        return false;
    }
    // recursive call
    return backwardCheck(arr, n - 1);
}

int main()
{
    // code
    int arr[] = {1, 4, 3, 4, 5};
    cout << sortedOrNot(arr, 5) << endl;
    bool sortOrNot = sortedOrNot(arr, 5);
    if (sortOrNot)
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }

    bool checkSorted = backwardCheck(arr, 5);
    if (checkSorted)
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }
    return 0;
}