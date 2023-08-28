#include<iostream>
using namespace std;

int multiplication(int num, int nTimes){
    //base case
    if (nTimes == 0) return 0;
    //recursive call to multiply by the base case number and then subtract one from the times left.
    return num + multiplication(num,nTimes-1);
}

int main(){
    int num = 3;
    int times = 3;
    cout << "The result is: "<<multiplication(num ,times)<<endl;
    return 0;
}