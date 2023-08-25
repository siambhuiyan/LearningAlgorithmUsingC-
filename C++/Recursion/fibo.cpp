#include<iostream>
using namespace std;

int Fibonacci (int num){
    //Base Case
    if(num == 0){
        return 0;
    }
    if(num==1){
        return 1;
    }
    //Recursive case and calculation
    int sum = Fibonacci(num-1)+Fibonacci(num-2);
    return sum;
}


int main(){
    int n;
    cout<<"Please enter the number you want to find fibonacci -> ";
    cin>>n;
    cout<<"\nThe fibonacci of "<<n<<"th num is: " <<Fibonacci(n)<<endl;
    return 0;
}