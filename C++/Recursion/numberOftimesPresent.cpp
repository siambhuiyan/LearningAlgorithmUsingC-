#include<iostream>
using namespace std;

int numberOfTimes(int arr[], int n, int i, int search){
    //base case
    if(i == n) return 0;
    //calculation
    int count = 0; 
    if(arr[i] == search){
        count++;
    }
    count += numberOfTimes(arr ,n, ++i,search);
    return count;
}

void numberOfTimes2(int arr[], int n, int i, int search,int &ans){
    //base case
    if(i == n) return;
    //calculation
    if(arr[i] == search){
        ans++;
    }
    numberOfTimes2(arr ,n, i+1,search,ans);
}

int main(){
    int arr[] = {0,1,2,2,2,3,2,2,2,2};
    int ans = 0;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Number of times : "<<numberOfTimes(arr, 10,0,2)<<endl;
    cout<<"-----------------------------------------------"<<endl;
    numberOfTimes2(arr,10,0,2,ans);
    cout<<"Different way to search number of times : "<<ans<<endl;
    cout<<"-----------------------------------------------"<<endl;
    return 0;
}