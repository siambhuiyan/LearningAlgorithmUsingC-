#include<iostream>
using namespace std;

int main(){
    int num1 = 1;
    int num2 = 3;
    cout<<"Before swap "<<num1<<" and "<<num2<<endl;

    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;

    cout<<"After Swap "<<num1<<" and "<<num2<<endl;
    return 0;
}