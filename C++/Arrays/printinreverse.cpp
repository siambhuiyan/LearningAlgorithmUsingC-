#include<iostream>
using namespace std;

int main(){
    int size = 4;
    int a[size] = {1,2,3,4};

    for(int i = size-1; i>=0; i--){
        cout<<a[i]<<endl;
    }
    return 0;
}