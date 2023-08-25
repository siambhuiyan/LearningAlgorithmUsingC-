#include<iostream>
#include<cstring>
using namespace std;


class ShallowCopy{
    public:
    int age; 
    char *name;
    public:
    ShallowCopy(ShallowCopy const &s){
        this->age =s.age ;
        this->name = new char[strlen(s.name)];
        strcpy(this->name, s.name);
    }
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
    int age = 10;
    char name []= "<NAME>";
    ShallowCopy shallowCopyObj(age , name );
    shallowCopyObj.display();
    name[0] = '0';
    ShallowCopy s2(age*2, name);
    s2.display();
    shallowCopyObj.display();
    
    //copy constructor 
    ShallowCopy s3(s2);
    cout<<"-----------------------"<<endl;
    cout<<"S3-->"<<endl;
    s3.display();
    s2.name[0] = '1';
    s2.display();
    s3.display();
    return 0;
}