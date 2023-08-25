#include<iostream>
using namespace std;

int pow(int num, int power){
    //base case:
    if(power==0) return 1;
    //recursive case:
    int smallPart = pow(num,power-1);
    //calculation
    return (smallPart*num);
}

int main(){
    int x,n;
    cout<<"Enter the base number : ";
    cin>>x;
    cout<<"\nEnter the power for the base : ";
    cin>>n;
    cout << "\nThe result is " <<pow(x , n)<<endl ;
    return  0;
}