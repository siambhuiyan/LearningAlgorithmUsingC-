#include<iostream>
using namespace std;

int length(char a[]){
    int count = 0 ;
    int i = 0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    return (count);
}

int main(){
    char str[] = "Hello";
    cout<<length(str)<<endl;
}