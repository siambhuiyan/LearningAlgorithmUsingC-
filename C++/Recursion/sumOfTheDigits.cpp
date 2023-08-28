#include<iostream>
using namespace std;

int sumOfTheDigits(int num){
    if(num==0) return 0;
    int sum = num%10;
    int smallPart = sumOfTheDigits(num/10);
    return sum+smallPart;
}

int main(){
    int num = 111111;
    cout<<sumOfTheDigits(num)<<endl;//5
    return 0;
}