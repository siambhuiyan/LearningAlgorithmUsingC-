#include <iostream>
using namespace std;

void printNum(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive case
    printNum(n - 1);
    // calculation
    cout << n << " ";
}

void printDes(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // calculation
    cout << n << " ";
    // recursive case
    printDes(n - 1);
}

int main()
{
    int num;
    cin >> num;
    printNum(num);
    cout<<endl;
    printDes(num);
    return 0;
}