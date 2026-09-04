#include<iostream>
using namespace std;

class base{
    public:
    int var1;
    void display(){
        cout<<"Displaying base class variable"<<var1<<endl;
    }
};
class derived : public base{
    public:
     int var2;
    void display(){
         cout<<"Displaying base class variable "<<var1<<endl;
         cout<<"Displaying derived class variable " <<var2<<endl;
    }
};
int main(){
    base* base_class_pointer;
    // this means that there is a pointer of type base class

    base obj1;
    derived obj2;

    base_class_pointer = &obj2; //pointer stores the address of obj2
      base_class_pointer->var1 = 34;
    // base_class_pointer->var2 = 23; // will throw an error

    base_class_pointer->display();

    derived* derived_class_pointer;
    derived_class_pointer = &obj2;
    derived_class_pointer->var2 = 98;
    derived_class_pointer->display();
    
    return 0;
}