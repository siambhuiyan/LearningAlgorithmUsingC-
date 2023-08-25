#include <iostream>
using namespace std;

void printArray(int a[][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " " << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m = 3;
    int n = 3;
    // cout<<"Enter your rows number : "<<endl;
    // cin>>m;
    // cout<<"Enter your columns number : "<<endl;
    // cin>>n;
    int tArr[m][3];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter " << i << " and " << j << endl;
            cin >> tArr[i][j];
        }
    }

    cout << "Here is your array : " << endl;
    printArray(tArr, m, n);

    return 0;
}
