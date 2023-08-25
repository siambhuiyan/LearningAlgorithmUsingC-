#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(10);
    cout << "size of the vector : " << v.size() << endl;
    v.push_back(11);
    v.push_back(8);
    cout << "size of the vector: " << v.size() << endl;
    cout << "Capacity of the vector : " << v.capacity() << endl;
    int size = v.size();
    cout<<"Printing the vector without sorting ->"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] <<" ";
    }
    sort(v.begin(), v.end());
    cout<<"v[0] -> ";
    cout << v[0] << endl;
    cout<<"value at -> ";
    cout << v.at(2) << endl;
    cout<<"printing vector sorted ->"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
