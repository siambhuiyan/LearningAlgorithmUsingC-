#include<iostream>
#include<cstring>
using namespace std;

void printAllPrefix(char str[]){
    for (int i = 0; str[i]!='\0'; i++){
        for(int j = 0;j<=i;j++){
            cout<<str[j];
        }
        cout<<endl;
    }
}

int main(){
    char str[]="abc";
    //print all prefix of string 
    printAllPrefix(str);
    return 0;
}
