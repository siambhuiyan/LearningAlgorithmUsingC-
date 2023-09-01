#include<iostream>
#include<vector>
using namespace std;

void saveElementIndex(int arr[],int n, int i, int search, vector<int> &allIndex){
    //base case
    if(i==n) return;
    //calculation
    if(arr[i]==search){
        allIndex.push_back(i);
    }
    //recursive call
    saveElementIndex(arr,n,i+1,search,allIndex);
}

int main(){
    //input array and number of elements in the array
    int arr[] ={1,2,3,4,5,5,5};
    int size=sizeof(arr)/sizeof(*arr);
    vector<int> allIndex;
    saveElementIndex(arr,size,0,5,allIndex);
    int vsize = allIndex.capacity()-1;
    for(int i = 0; i<vsize;i++){
        cout<<allIndex[i]<<" ";
    }
    return 0;
}