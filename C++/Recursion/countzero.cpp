#include<iostream>
using namespace std;

int countZero(int num){
    //base case
    if (num==0) return 0;

    //recursive case 
    int total = 0;
    int count = num%10;
    if(count==0) total++;
    int smallOutput = countZero(num/10);
    return smallOutput + total;
}

int main(){
    int num = 1020;
    cout<< "The number of zeros in "<<num<<" is: ";
    cout << countZero(num)<<endl;
    return 0;
}