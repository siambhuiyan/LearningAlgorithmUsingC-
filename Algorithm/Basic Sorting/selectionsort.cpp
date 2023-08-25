#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int>&v){
    int size = v.size();
    for(int i=0;i<=size-2; i++){
        int swap=0;
        for(int j = i; j<size;j++){
            if(v[i]>v[j]){
                swap = v[i];
                v[i] = v[j];
                v[j] = swap;
            }
        }
    }
}

int main(){
    vector<int> v = {1,3,2,3,5,6};
    selectionSort(v);
    int size = v.size();
    for(int i = 0; i<size; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
