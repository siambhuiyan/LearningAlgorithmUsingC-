#include<iostream>
using namespace std;

int numOfDigit(int num){
    if(num==0){
        //Base case
        return 0;
    }
    //recursive case
    int smallOutput = numOfDigit(num/10);
    return smallOutput + 1;
}

int main(){
    int num = 1234;
    cout<<"Number of digits in "<<num<<": "<<numOfDigit(num);
    return 0;
}