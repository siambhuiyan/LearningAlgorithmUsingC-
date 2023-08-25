#include<iostream>
#include<cstring>
using namespace std;

void printReversePrefix(char a[]){
    for(int i = strlen(a)-1;i>=0;i--){
        for(int j = strlen(a)-1;j>=i;j-- ){
            cout<<a[j];
        }
        cout<<endl;
    }
}

int main(){
    char str[]="abc";
    //print all prefix of string 
    printReversePrefix(str);
    return 0;
}