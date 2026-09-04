#include <iostream>
using namespace std;

class Base
{
    protected: // when you want it to be priavte but still inheritable
    int a;
    private:  // S tier security 
    int b;
};

/*
For a Protected member 
                    Public derivation    Private Derivation    Protected Derivation
Private members ---> not inherited       Not inherited         Not inherited
Protected members--> Protected           Private               Protected
Public members ----> Public              Private               Protected
*/  

class Derived : public Base
{

};

int main()
{
    Base b;
    Derived d;

    // cout<<d.a; // will not work as it is protected in both base and derived class
    return 0;
}
