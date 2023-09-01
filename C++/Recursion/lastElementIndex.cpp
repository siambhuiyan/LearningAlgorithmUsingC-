#include<iostream>
using namespace std;

//Writing a recursion that return the last index number of a given element in the array.

int FindIndex(int arr[], int n, int i, int searchElement){
    //base case
    if (i == -1) return -1;

    //recursive case
    if(arr[i] == searchElement) return i;
    int smallPart = FindIndex(arr,n,i-1, searchElement);
    return smallPart;
}
int FindIndex2(int arr[], int n, int searchElement){
    //base case
    if (n == 0) return -1;

    //recursive case
    if(arr[n-1] == searchElement) return n-1;
    int smallPart = FindIndex2(arr,n-1, searchElement);
    return smallPart;
}

//Here we start searching from the start to end and return the last index we find.
int DifferentWay(int arr[], int n, int i, int searchElement){
    //Base case
    if(i == n) return -1;
    //calculation 
    int search = DifferentWay(arr, n, i+1, searchElement);
    if(search == -1){
        if(arr[i]==searchElement){
            return i;
        }else{
            return -1;
        }
    }else{
        return search;
    }
}

int main(){
    int arr[] = {1,2,3,3,4,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int searchElement;
    cout<<"Enter the value you want to search : ";
    cin>>searchElement;
    int indexFound = FindIndex(arr,size,size-1,searchElement);
    cout<<"The index for the asked element : "<<FindIndex(arr,size,size-1,searchElement)<<endl;
    cout<<"The element at the index we found is : " <<arr[indexFound]<<endl;

    cout<<"-----------------------------------------------------"<<endl;
    cout<<"Using another method : ";
    cout<<FindIndex2(arr,size,searchElement)<<endl;

    cout<<"------------------------------------------------------"<<endl;
    cout<<"Different way of searching an array : ";
    cout<<DifferentWay(arr,size,0,searchElement)<<endl;
    return 0;
}