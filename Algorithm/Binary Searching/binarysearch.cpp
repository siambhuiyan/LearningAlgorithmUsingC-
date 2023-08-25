#include <iostream>
using namespace std;

int binary(int a[], int size, int valueSearch)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int mid = start +((end-start) / 2);
        if (a[mid] == valueSearch)
        {
            return mid;
        }
        else if (a[mid] > valueSearch)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "Enter your value to search array using binary search -> ";
    int searchValue;
    cin >> searchValue;
    int found = binary(a, size, searchValue);
    if (found > -1)
    {
        cout << "Index number is -> " <<found<< endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
