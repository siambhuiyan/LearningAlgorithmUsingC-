#include<iostream>
using namespace std;

void insertion(int arr[], int size){
    int i, j, key;
    for (i = 1; i<size; i++){
        key = arr[i];
        j = i -1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[i];
            j = j - 1;
        }
        arr[j+1] = key;
        
    }
}

void print(int a[], int size){
    cout<<"The sorted array is: "<<endl;
    for (int i=0; i<size; i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

int main(){
    int arr[] = {2,3,4,2,3,9,8};
    int size  = sizeof(arr)/sizeof(arr[0]);
    //printing the unsorted array
    cout<<"The unsorted array is: "<<endl;
    print(arr, size);
    //printing the sorted array
    cout<<"The sorted array is : "<<endl;
    insertion(arr,size);
    print(arr,size);
}