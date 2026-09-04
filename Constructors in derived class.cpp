#include<iostream>
using namespace std;
/*
Case 1:
class B : public A{
pehle base class ka constructor run hoga
 Order of execution of constructor ===> first A() then B()
};

Case 2:
Class A : public B, public C{
    constructors are called in order in which the base classes are written 
    when making the derived class
    Order of execution---> B() then C() then finally A()

};

Case 3:
Class A : public B, virtual public C

    order of execution ---> C() then B() and finally A()

*/



class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructor called"<<endl;
    }
    void printDataBase1(){
        cout<<"Value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor called"<<endl;
    }
    void printDataBase2(){
        cout<<"Value of data2 is "<<data2<<endl;
    }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d):Base1(a),Base2(b){
    derived1 = c;
    derived2 = d;
    cout<<"Derievd class constructor called "<<endl;
}


    void printData(){
        cout<<"Value of derived1 is "<<derived1<<endl;
        cout<<"Value of derived2 is "<<derived2<<endl;
    }
};


int main(){
    Derived Abhay(1,2,3,4);
    Abhay.printDataBase1();
    
    return 0;
}