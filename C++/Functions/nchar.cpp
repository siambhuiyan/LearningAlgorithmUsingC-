#include<iostream>
using namespace std;

void strCopy(char dest[], char source[],int n){
    for(int i = 0; i<=n; i++){
        if(source[i]!='\0')
        dest[i] = source[i];
    }
}

int main(){
    char dest[] = "empty";
    char source[] = "hell";
    int n;
    cout<<"Enter the length of n: "<<endl;
    cin>>n;
    strCopy(dest,source,n);
    cout<<"Changed string : "<<dest<<endl;

    return 0;
}
