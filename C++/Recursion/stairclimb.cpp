#include <iostream>
using namespace std;

int numOfWays(int N)
{
    // Base case
    if (N == 1)
    {
        return 1;
    }
    if (N <= 0)
    {
        return 0;
    }
    if (N == 2)
    {
        return 2;
    }
    // Possible number of steps you can take is n-1,n-2 and n-3
    return numOfWays(N - 1) + numOfWays(N - 2) + numOfWays(N - 3);
}

int main()
{
    cout << numOfWays(3) << endl;
    return 0;
}