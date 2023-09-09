//The input consists of a single integer N that is not greater than 10000 by it's absolute value.
//Write a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.
#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Please a value for N to get the sum of all the num upto N: ";
    cin>>num;
    int sum = 0;
    if (num > 0) {
        sum= (num * (num + 1)) / 2;
    } else if (num < 0) {
        num = abs(num);
        sum = -((num * (num + 1)) / 2);
    }
    cout<<"The Sum is : "<<sum<<endl;
    return 0;
}
