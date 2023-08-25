#include<iostream>
#include "carclass.cpp"
using namespace std;

int main(){
    Car *ford = new Car();

    ford->carModel = 1233;
    ford->carNumber = 12222;

    cout<<"The Car name is ford and the car model is "<<ford->carModel<<endl;
    cout<<"The car name is ford and the car number is "<<ford->carNumber<<endl;

    return 0;

}