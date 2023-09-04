#include<iostream>
using namespace std;

void print(int *a)
{
    cout << *a << "\n";
}

int main()
{
    int x;
    cout << "Enter a number\n";
    cin >> x;
    print(&x);
    return 0;
}