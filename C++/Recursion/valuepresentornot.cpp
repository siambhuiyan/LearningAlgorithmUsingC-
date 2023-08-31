#include <iostream>
using namespace std;

bool found(int arr[], int size, int search)
{
    // base case:
    if (size == 0)
        return false;
    // calculation:
    if (arr[0] == search)
    {
        return true;
    }
    //recursive call:
    return found(arr + 1, size-1, search);
}

int main()
{
    // code
    int arr[] = {0, 1, 2, 3, 4};
    cout << found(arr, 5, 3) << endl;
    return 0;
}