#include<iostream>
#include<cstring>
using namespace std;

class DeepAndShallow{
    int age;
    char *name;
    public:
    DeepAndShallow(int age, char *name){
        this->age = age; 
        this->name = name;
    }
    void display(){
        cout<<"Age is "<<this->age<<endl;
        cout<<"Name is : "<<this->name<<endl;
    }
};

class ShallowCopy{
    int age; 
    char *name;
    public:
    ShallowCopy(int age, char *name){
        //for deep copy create an array in dynamically then using strcpy copy the stirng into the new address.
        this->name = new char[strlen(name)];
        this->age = age;
        strcpy(this->name, name);  
    }
    void display(){
        cout<<"Age is "<<this->age<<endl;
        cout<<"Name is : "<<this->name<<endl;
    }
};

int main(){
    //shallow copy
    int num = 10; 
    char arr[] = "siam";
    DeepAndShallow deepCopy(num, arr);
    deepCopy.display();
    arr[3] = 's';
    deepCopy.display();
    DeepAndShallow s1 (num = 20, arr);
    s1.display();
    deepCopy.display();


    //Deep copy
    int age = 10;
    char name []= "<NAME>";
    ShallowCopy shallowCopyObj(age , name );
    shallowCopyObj.display();
    name[0] = '0';
    ShallowCopy s2(age*2, name);
    s2.display();
    shallowCopyObj.display();

    return 0;
}