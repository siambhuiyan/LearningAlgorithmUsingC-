#include<iostream>
using namespace std;

void printSubSequence(string input, string output){
    //base case 
    if(input.length()==0){
        cout<<output<<endl;
        return;
    }
    //recursive case
    printSubSequence(input.substr(1), output);
    printSubSequence(input.substr(1), output+input[0]);
}

void printSubSeqChar(char arr[], char out[],int i){
    if(arr[0]=='\0'){
        out[i]='\0';
        cout<<out << endl ;
        return;
    }
    //recursive case
    out[i] = arr[0];
    printSubSeqChar(arr + 1 , out, i+1);
    printSubSeqChar(arr+1,out,i);
}

int main(){
    // your code goes here
    //Input String
    string input;
    string output = "";
    cout <<"Enter the Input String : ";
    cin>>input;
    cout<<"------------STR SUBSEQUENCE START HERE--------------"<<endl;
    printSubSequence(input,output);

    cout<<"------------CHAR SUBSEQUENCE START HERE--------------"<<endl;
    char inputs[] ="ABC";
    char outputs[10];
    printSubSeqChar (inputs,outputs,0 );
    return 0;
}