#include<iostream>
using namespace std;

int main(){
    char a[] = "hello";
    cout << sizeof(a)<<endl;
    int start = 0;
    int end = 4; 
    while (start < end){
        swap(a[start], a[end]);
        end--;
        start++;
    }
    cout<<"The reverse string is : "<<a<<endl;
    return 0;
}