#include<iostream>
using namespace std;

int lengthOfChar(char arr[]){
    //base case
    if(arr[0]=='\0') return 0;
    //recursive case
    return 1 + lengthOfChar(arr+1);
}

int main(){
    char name [] = "Siam";
    int length = lengthOfChar(name);
    cout<<length<<" ";
    return 0;
}