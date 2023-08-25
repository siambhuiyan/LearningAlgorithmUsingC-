#include<iostream>
using namespace std;

void print(int arr[], int size){
    cout<<"Array printing ->"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void dynamic(int* a, int size){
    cout<<"Dynamic Array Printing ->"<<endl;
    for (int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int * createArray(int size){
    int * arr = new int[size];
    for (int i = 0; i<size; i++){
        arr[i] = i*2;
    }
    return arr;
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int *a = new int[size]{1,2,3,4,5,6};
    print(arr,size);
    dynamic(a, size);
    
    int * newArray =  createArray(size);
    cout<<"New array that was created using the pointer function -> "<<endl;
    print(newArray, size);

    delete [] a;
    delete [] newArray;
    
    return 0;
}