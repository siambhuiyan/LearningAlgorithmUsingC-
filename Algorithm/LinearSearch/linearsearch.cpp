#include<iostream>
using namespace std;

void indexSearch(int a[], int size, int search){
    int flag =0;
    for(int i = 0; i<size; i++){
        if(a[i]==search){
            cout<<"Found at "<<i<<endl;
            flag =1;
            break;
        }
    }
    if(flag==0){
        cout<<"Not found!"<<endl;
    }
}

int main(){
    int a[] = {1,2,3,4,5,6};
    int size = sizeof(a)/sizeof(a[0]);
    int searchItem;
    cout<<"Search your value : ";
    cin>>searchItem;
    indexSearch(a,size,searchItem);
    return 0;
}
