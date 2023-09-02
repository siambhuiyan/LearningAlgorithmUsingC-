#include<iostream>
using namespace std;

int stringToInt(string num,int length){
    //base case
    if(length==0){
        return 0;
    }
    //recursive case and calculation
    int smallOutput = stringToInt(num,length-1);
    int lastDigit = num[length-1]-'0';
    int ans = 10*smallOutput+lastDigit;
    return ans;
}

int main(){
    string num = "122";
    int number = stringToInt(num,3);
    cout<<number<<endl;
    return 0;
}