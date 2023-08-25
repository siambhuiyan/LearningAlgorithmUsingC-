#include<iostream>
using namespace std;

void dynamicInt(int **num){
    **num = 1;
}


int main(){
    int *a = new int;
    //to enter a value int type we have to use dereferencing 
    *a = 12;
    
    cout<<"address -> "<<a<<endl;
    cout<<"address of a ->"<<&a<<endl;
    cout<<"stored value : "<<*a<<endl;
    dynamicInt(&a);
    cout<<"Stored value : "<< *a<<endl;
    delete a;

    return 0;
}