#include<iostream>
using namespace std;

int main(){
    int a = 10;

    //null pointer 
    int* ptr = nullptr;
    cout << "Address of variable 'a' is: "<< &a<<endl;

    //pointer pointing to a
    ptr = &a;
    cout<<"ptr stores : "<<ptr<<endl;
    //dereferencing 
    cout<<"ptr points to the address and it stores : "<<*ptr<<endl;
    cout<<"address of ptr : "<<&ptr<<endl;

    //double pointer 
    int** dPtr = &ptr;
    cout<<"dptr stores : "<<dPtr<<endl;
    cout<<"address of dptr is : "<<&dPtr<<endl;
    return 0;
}
