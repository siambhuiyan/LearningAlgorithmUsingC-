#include<iostream>
using namespace std;

bool palindrome(int arr[], int s, int e){
    //base case:
    if(s>e){
        return true; 
    }
    if(arr[s]==arr[e]){
        return palindrome(arr,s+1,e-1);
    }
    else{
        return false;
    }
}

int main(){
    int arr[] = {1,2,3,3,2,1};
    cout<<palindrome(arr , 0, sizeof(arr)/sizeof(*arr)-1)<<endl;
    bool pd = palindrome(arr , 0, sizeof(arr)/sizeof(*arr)-1);
    if(pd){
        cout<<"Palindromic";
    }else{
        cout<<"Not Palindromic";
    }
    return 0 ;
}