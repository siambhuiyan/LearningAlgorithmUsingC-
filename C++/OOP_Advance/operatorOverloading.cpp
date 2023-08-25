#include <iostream>
using namespace std;

class Overload
{
    int a;
    int b;

public:
    Overload(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " AND " << b << endl;
    }

    Overload operator* (Overload const &f2){
        int x = a*f2.a;
        int y = b*f2.b;
        Overload fnew(x,y);
        return  fnew ;
    }
};

int main()
{
    Overload f1(2,3);
    f1.display();
    Overload f2(2,4);
    f2.display();
    Overload f3 = f1*f2;
    f3.display();
    Overload f4 = f2*f1;
    f4.display();
    return 0;
}
