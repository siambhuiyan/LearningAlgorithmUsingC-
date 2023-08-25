#include<iostream>
using namespace std;

int main(){
    int num1 = 12;
    int num2 = 14;
    
    //swap
    cout << "Before swap: "<<num1<<" and "<<num2<<endl;
    //swap(num1,num2);
    int swap = num1;
    num1=num2;
    num2=swap;
    cout <<"After Swap : "<<num1<<" and " <<num2<< endl ;
    return 0;
}