#include <iostream>
#include "firstclasss.cpp"
using namespace std;



int main()
{
    Student *st = new Student();
    //dynamic class setting data
    (*st).age = 12;
    cout << "Age of student is : "<<(*st).age<<endl;
    st->roll = 100;
    cout<<"Roll of student is : "<<st->roll<<endl;
    return 0;
}
