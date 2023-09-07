#include<iostream>
using namespace std;


void mergeArrays(int a[], int x[], int y[], int s, int e){
    int mid = (s+e)/2;
    int i = s;
    int j = mid+1; //starting point of the y array
    int k = s; //start index for the a[] array
    while(i<=mid && j<=e){
        if(x[i]<y[j]){
            a[k] = x[i];
            i++;
            k++;
        }else{
            a[k] = y[j];
            j++;
            k++; 
        }
    }
    while(j<=e){
        a[k]=y[j];
        j++;
        k++;
    }
    while(i<=mid+1){
        a[k]=x[i];
        i++;
        k++;
    }
}

void mergeSort(int a[], int s, int e){
    if(s>=e){
        return;
    }
    //find the middle point of array and divide it into two halves.
    int x[100];
    int y[100];
    int mid = (s+e)/2;
    //left side 
    for(int i = 0; i<=mid; i++){
        x[i] = a[i];
    }
    //right side
    for(int j = mid+1; j<=e; j++){
        //y[j-mid-1]=a[j]; 
        // array entry will start from the zero. Other wise if we omitted the j-mid-1 it will start enter the value 
        //from the mid point of the y array.
        y[j] = a[j];
    }
    //recursion call to sort the array 
    mergeSort(x,s,mid);
    mergeSort(y,mid+1,e);
    //calling the margeArray to marge the array
    mergeArrays(a,x,y,s,e);
}

int main(){
    int a[] ={2,3,1,3,5};
    mergeSort(a,0,4);
    for(int i = 0; i<5; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}