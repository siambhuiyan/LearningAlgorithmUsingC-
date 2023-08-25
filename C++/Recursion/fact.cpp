#include<iostream>
using namespace std;

int fact(int num){
    if (num<0) return -1;

    if(num==0) return 1;
    int smallPart = fact(num-1);
    return num * smallPart;

}

int main(){
    cout<<"Factorial of a negative number : "<<fact(-5)<<endl;//-1
    int num;
    cout<<"Please enter the number you want to find the factorial for : ";
    cin>>num;
    cout << "Factorial of the given number "<<fact(num);
    return 0;
}
