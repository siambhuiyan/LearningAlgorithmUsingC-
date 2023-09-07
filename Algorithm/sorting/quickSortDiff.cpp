#include <iostream>
using namespace std;

int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int i = s;

    for (int j = s; j < e; j++)//exclude the last value since we are using it as a pivot
    {
        if (a[j] < pivot) //if a[j] is less than pivot
        {
            swap(a[i], a[j]); //then swap a[i] with a[j]
            i++; //pivot index
        }
    }

    swap(a[i], a[e]); // Place the pivot in its correct position
    //we stop right before the pivot value so we have to swap with the found pivot index.

    return i;
}

void quickSort(int a[], int s, int e)
{
    if (s >= e)
        return;
    // calling partition function to get the pivot index
    int p = partition(a, s, e);
    quickSort(a, s, p - 1);
    quickSort(a, p + 1, e);
}

int main()
{
    int a[] = {2, 3, 2, 4, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}