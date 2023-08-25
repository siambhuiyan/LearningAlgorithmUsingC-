#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char a[] = "siam";
    char b[] = "Siam";
    //Length of the string using strlen functions
    int length = strlen(a);
    cout<<"The length of the string is : "<<length<<endl;

    //comparing two strings
    if (strcmp(b,a) == 0){
        cout<<"Strings are equal!"<<endl;
    }else{
        cout<<"String not equal"<<endl;
    }

    //copy string from one string to another 
    strcpy(b,"hello");
    cout<<b<<endl;

    //copy n-first character 
    strncpy(b, "oo",2);
    cout<<b<<endl;

    //string concat 
    strcat(b,"hello");
    cout<<b<<endl;

    return 0;
}