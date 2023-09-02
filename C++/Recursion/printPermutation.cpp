#include<iostream>
using namespace std;

void printPermutation(char arr[],int i = 0){
    if(arr[i]=='\0'){
        cout<<arr<<endl;
        return;
    }
    for(int j = i; arr[j]!='\0';j++){
        swap(arr[i],arr[j]);
        printPermutation(arr,i+1);
        swap(arr[i],arr[j]);//swapping back to the original position of the given input.
    }
}

int main(){
    char name[] = "Siam";
    printPermutation(name);
    return 0;
}