#include<iostream>
using namespace std;

void print(int arr[], int n,int i, int searchElement){
    //base case
    if(i == n){
        return;
    };

    //calculation and recursion call
    if(arr[i]==searchElement){
        cout<< "Found at index "<<i << endl ;
    }
    print(arr,n,i+1,searchElement);
}

int main(){
    int arr[] = {0,1,1,2,3,3,4};
    print(arr,sizeof(arr)/sizeof(arr[0]), 0,3);
    return 0;
}