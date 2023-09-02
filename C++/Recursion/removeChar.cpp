#include<iostream>
using namespace std;

void removeChar(char arr[]){
    //base case
    if(arr[0]=='\0') return;
    //calculation and recursive case 
    if(arr[0]!='a'){
        removeChar(arr+1);
    }else{
        for(int i = 0;arr[i]!='\0';i++){
            arr[i] = arr[i+1];
        }
        removeChar(arr);
    }
}

int main(){
    char arr [] ="abcdaa";
    removeChar(arr);
    cout<<endl<<"After removing a: "<<arr;
    return 0;
}