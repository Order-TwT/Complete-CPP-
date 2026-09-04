#include<iostream>
using namespace std;
/*
Syntax for initialization list in constructor 

constructor (arguement-list) : initialization-section{
    assignment + other code;
}
*/


class test{
int a,b;    // the order in which the vairables are made is the order in which 
            // the variables are initialized 
public:
    // test(int i , int j) : a(i), b(j) //works
    // test(int i , int j) : a(i), b(2*j)works
    // test(int i , int j) : a(i), b(i+j)works
    test(int i , int j) : a(i), b(a+j) //works as a has already been initialized
    // test(int i , int j) : b(i), a(i+b) this gives garbage value in a, as it is initliazed first, but sicne b has not assigned value yet, it will return a garbage value

    {
    cout<<"Constructor executed"<<endl; 
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;
    }
};


int main(){
    test t(4,6);
    return 0;
}