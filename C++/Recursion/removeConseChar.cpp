#include<iostream>
using namespace std;

void removeConsChar(char arr[]){
    //base case
    if(arr[0]=='\0') return;
    //recursive call and calculation
    if(arr[0]==arr[1]){
        for(int j = 0; arr[j]!='\0'; j++){
            arr[j] = arr[j+1];
        }
        removeConsChar(arr);
    }else{
        removeConsChar(arr+1);
    }
}

int main(){
    char name[] = "aaaabbccdde";
    removeConsChar(name);
    cout<<name<<endl;
    return 0;
}