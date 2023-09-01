#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    // base case:
    if (size == 0)
        return 0;
    // recursive step:

    int smallPart = sumOfArray(arr, size - 1);
    int add = arr[size - 1] + smallPart;
    return add;
}

int sumOfArrayForwardSlice(int arr[], int size)
{
    // base case:
    if (size == 0)
    {
        return 0;
    }
    // recursive step:
    int smallPart = sumOfArrayForwardSlice(arr + 1, size - 1);
    int add = arr[0] + smallPart;
    return add;
}

int sumOfArray3 (int arr[], int size, int i){
    //base case:
    if(i==size) return 0;
    //recursive step:
    int smallPart = sumOfArray3(arr, size, i+1);
    return arr[i]+smallPart;
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << sumOfArray(arr, sizeof(arr) / sizeof(arr[0])) << endl;
    cout << sumOfArrayForwardSlice(arr, sizeof(arr) / sizeof(arr[0]))<<endl;
    cout<< sumOfArray3(arr, sizeof(arr)/sizeof(arr[0]), 0)<<endl;
    return 0;
}