#include <iostream>
using namespace std;

class Name
{
    int a;
    int b;

public:
    void setA(int a)
    {
        this->a = a;
    }
    void setB(int b)
    {
        this->b = b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    Name(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    //Destructor 
    ~Name(){
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    Name *s = new Name(12, 10);
    Name *s1 = new Name(9, 4);

    //copy assignment operator
    s = s1;
    cout<<s->getA()<<endl;
    cout<<s->getB()<<endl;

    delete s1;
    return 0;
}