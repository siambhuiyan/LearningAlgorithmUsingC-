#include<iostream>
using namespace std;

void strCopy(char dest[], char source[]){
    for(int i = 0; dest[i]!='\0';i++){
        dest[i] = source[i];
    }
}

int main(){
    char dest[] = "empty";
    char source[] = "hell";
    strCopy(dest,source);
    cout<<"Changed string : "<<dest<<endl;

    return 0;
}