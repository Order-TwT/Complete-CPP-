#include<iostream>
using namespace std;

int main(){
    // pointer--->Holda the address of other data types
    int a=3;
    int *b=&a;
    
    cout<<"The address of a is b "<<&a<<endl; //gives the address of A present in the ram 
    // &----> address of operator

    cout<<"The value at address of b is "<<*b<<endl;

//p is the address of x
//*p is the value at the address

    // *----> (value stored at that address) dereference of operator
    //pointer to pointer
    int**c=&b; //(read as "pointer to pointer to int")
    //since b already stores the address of a 
    // and &b stores the address where the address of a is stored
    // we use int** and not int*.
    cout<<"The address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c))"<<**c<<endl;
    return 0;
}