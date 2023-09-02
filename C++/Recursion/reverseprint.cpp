#include<iostream>
using namespace std;

void reversePrint(int arr[], int n, int i){
    //base case
    if(i==n) return;
    //recursive call
    reversePrint(arr,n,i+1);
    cout<<arr[i]<<" ";
}

//To print character
void printReverseChar (char arr[], int i ){
    //base case
    if(arr[i]=='\0') return;
    //recursive case
    printReverseChar(arr,i+1);
    cout<<arr[i]<<" ";
}

int main(){
    //input array size and elements of the array
    int arr[] = {1,2,3,4};
    reversePrint(arr , 4 ,0 );

    cout<<"\n";
    //character array
    char str []="Hello";
    printReverseChar(str,0);
    return 0;
}