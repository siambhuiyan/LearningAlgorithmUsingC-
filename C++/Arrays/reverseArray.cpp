#include<iostream>
using namespace std;

int main(){
    int size = 4;
    int a[size] = {1,2,3,4};
    int start = 0;
    int end = size - 1;

    while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for (int i = 0; i<size; i++){
        cout<<a[i];
    }
    return 0;
}