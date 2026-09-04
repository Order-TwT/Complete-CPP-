#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"How are you"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }

};

class derived : public base1, public base2{
    private:
    int a;
    public:

    /* to remove ambiguity we use 
    syntax
    data_tye func_name(){
        base class name::func();
    }
        now this calls the greet() from base1
    */
    void greet(){
        base1::greet();
    }
};

class B{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    }
};
class D: public B{
    // if no member function of its own then we use the inherited say()
    // if new member with same name and we make and object od class D then, the member function of class D is used
    // hence no ambiguity is there
};


int main(){
    //Ambiguity 1
    base1 base1obj;
    base2 base2obj;

    base1obj.greet();
    base2obj.greet();

    derived d;
    d.greet();

    // Ambiguity 2
    return 0;
}