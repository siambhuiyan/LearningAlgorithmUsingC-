#include<iostream>
#include<cmath>
using namespace std;

double geoSum(int num, int power){
    //base case:
    if (power == 0){
        return 1;
    }
    //recursive case:
    double smallPart = geoSum(num, power-1);
    //calculation part:
    return 1.0/(pow(num,power))+smallPart;
}

int main(){
    int num = 2;
    int power = 3;
    cout << "The sum of the geometric series is : "<<geoSum(num , power)<<endl;
    return 0;
}