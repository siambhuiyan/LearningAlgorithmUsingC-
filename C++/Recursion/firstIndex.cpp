#include<iostream>
using namespace std;

//This is a program which will return the first element it finds in the array.  
//And avoid anything that come after the first time it finds anything in the array.
int firstMeetElement(int arr[], int i, int element, int size){
    //base case:
    if(i==size) return -1;

    //recursive case:
    if(arr[i]==element) return i;
    int smallPart = firstMeetElement(arr, i+1, element, size);
    return smallPart;
}

int main(){
    int arr[] = {1,2,3,3,4,5,5};
    cout<<firstMeetElement(arr , 0, 5, sizeof(arr)/sizeof(*arr));
    return 0;
}