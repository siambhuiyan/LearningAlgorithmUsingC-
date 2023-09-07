#include<iostream>
using namespace std;

int partition(int a[], int s, int e) {
    int pivot = a[e];
    int pi = s;
    
    for (int i = s; i < e; i++) {
        if (a[i] <=pivot) {
            pi++;
        }
    }
    
    swap(a[pi], a[e]); // Place the pivot in its correct position
    int i = s;
    int j = e;

    while (i <= pi && j >= pi) {
        if (a[i] > pivot && a[j]<pivot) {
            swap(a[i], a[j]);
        } 
        i++;
        j--;
    }
    return pi;
}


void quickSort(int a[],int s,int e){
    if(s>=e) return;
    //calling partition function to get the pivot index
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}

int main() {
    int a[] = {2, 3, 2, 4, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
