#include<iostream>
using namespace std;
// What does "virtual" actually do?

// It tells C++:

// "If a class inherits from me through multiple paths, create only one shared copy of me."

class A{
     int a;
    public:
    A( int p){
        a=p;
    }
    

    int x = 10;
};

class B : virtual public A{

};
class C : virtual public A{

};

class D : public B, public C{

};

int main(){

    D obj;
    cout<<obj.x;
    return 0;
}