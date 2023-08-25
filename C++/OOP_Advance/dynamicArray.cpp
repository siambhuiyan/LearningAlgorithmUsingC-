#include <iostream>
using namespace std;

class DynamicArr
{
    int capacity;
    int *arr;
    int currentIndex;

public:
    DynamicArr()
    {
        capacity = 5;                  // default value of array size is set to ten.
        arr = new int[this->capacity]; // dynamic memory allocation for the array.
        currentIndex = 0;
    }

    // User only provide the element and we add the value at the end of the array.
    void add(int element)
    {
        if (currentIndex == capacity)
        {
            int *newArr = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
            capacity = capacity * 2;
        }
        arr[currentIndex] = element;
        currentIndex++;
    }

    // add element given by the user and with specific position.
    void add(int element, int position)
    {
        if (position < currentIndex)
        {
            arr[position] = element;
        }
        else if (position == capacity)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    // get the value based on the position given by the user
    int get(int position)
    {
        if (position >= 0 && position < currentIndex)
        {
            return arr[position];
        }
        else
        {
            return -1;
        }
    }

    // print all the value of the array
    void print()
    {
        for (int i = 0; i < currentIndex; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // get capacity of the current array
    int getCapacity()
    {
        return capacity;
    }
};

// main function start here
int main()
{
    DynamicArr arr;
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.add(1);
    arr.add(2);
    arr.add(3);
    arr.add(4);
    arr.print();
    cout<<arr.getCapacity()<<endl;
    cout<<arr.get(10)<<endl;
    arr.add(12,5);
    arr.print();
    return 0;
}