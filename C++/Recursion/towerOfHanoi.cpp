#include<iostream>
using namespace std;

int toh(int n){
    if(n==0){
        return 0;
    }
    return toh(n-1) + 1 + toh(n-1);
}

void printTowerMove(int n, char s,char h,char d){
    if(n==0){
        return;
    }
    printTowerMove(n - 1 ,s,d,h );
    cout << "move disk "<< n <<" from rod " << s<< " to rod "<< d << endl ;
    printTowerMove (n - 1,h,d,s ) ;
}


int main(){
    cout<<toh(3)<<endl;//3
    printTowerMove(3,'S','H','D');
    return 0;
}