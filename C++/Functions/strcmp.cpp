#include<iostream>
#include<cstring>
using namespace std;

bool strcom(char a[], char b[]) {
    int lenA = strlen(a);
    int lenB = strlen(b);

    // Compare lengths
    if (lenA != lenB) {
        return false;
    }

    for (int i = 0; i < lenA; i++) {
        if (a[i] != b[i]) {
            return false; // Return false if any characters don't match
        }
    }

    return true; // All characters match, return true
}


int main(){
    char a[] = "hell";
    char b[] = "hello";

    cout<<strcom(a,b)<<endl;
    if (strcom(a,b))
    {
        cout<<"String matched!"<<endl;
    }else{
        cout<<"Strings not matched"<<endl;
    }
    

    return 0;
}