#include<iostream>
using namespace std;

int main(){
    int size = 10;
    int num;
    int arr[size] = {1,2,3,45,6,7,84,22,12,10};
    for(int i = 0; i<size ; i++){
            if(num > arr[i]){
                num = arr[i];
            }
    }
    cout<<num<<" "<<endl;
}