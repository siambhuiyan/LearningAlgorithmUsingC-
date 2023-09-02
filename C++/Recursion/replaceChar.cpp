#include<iostream>
using namespace std;

void replaceChar(char arr[],char input,int i){
    //base case
    if (arr[i]=='\0') return;
    //recursive case
    if(arr[i]==input){
        arr[i] = 'x';
    }
    replaceChar(arr,input,i+1);
}

int main(){
    char name[] = "Hello";
    replaceChar(name,'l', 0);
    cout<<name<<endl;
    return 0;
}