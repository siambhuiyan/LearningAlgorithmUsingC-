#include<iostream>
using namespace std;

int main(){
    int size = 10;
    int arr[size];

    for(int i = 0; i<size; i++){
        arr[i] = i*2;
        cout<<arr[i]<<" ";
    }


    //sum of the elements
    int sum = 0;
    for(int j = 0; j<size; j++){
        sum += arr[j];
    }

    //print sum of the element 
    cout<<'\n'<<"sum is :"<<sum<<endl;
}