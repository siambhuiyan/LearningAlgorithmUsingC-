#include<iostream>
#include<cstring>
using namespace std;

void stringConcat(char string1[], char string2[]){
    int lenStr1 = strlen(string1);
    int lenStr2 = strlen(string2);
    for(int i = 0; string2[i]!='\0';i++){
        string1[lenStr1+i] = string2[i];
    }
    string1[lenStr1 + lenStr2] = '\0';
}

int main(){
    char str1[50] = "hel";
    char str2[] = "lo";

    stringConcat(str1,str2);
    cout<<str1<<endl;
    return 0;
}