#include<iostream>
using namespace std;

int strlen(char a[]){
    int len =0;
    for(int i = 0; a[i]!='\0'; i++){
        len++;
    }
    return (len);
}

int main(){
    char str[]="Hello";
    cout<<strlen(str)<<endl;
    return 0;
}