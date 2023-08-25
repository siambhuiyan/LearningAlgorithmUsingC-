#include<iostream>
using namespace std;

void bubbleSort(int a[], int size){
    //here n-1 means the number of times the sort happens for an array size of n
    for (int i = 0; i<=size-1;i++){
        int swap = 0;
        int flag = 0;
        for(int j = 0; j<=size-2;j++){
            if(a[j]>a[j+1]){
                //swapping
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
                flag =1;
            }
        }
        if(flag==0){
            break; //array is already sorted.
        }
    }
}

int main(){
    int a[] = {2,3,2,7,4,2,4,3,9};
    int size = sizeof(a)/sizeof(a[0]);
    bubbleSort(a,size);
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}