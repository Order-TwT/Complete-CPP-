#include <iostream>
using namespace std;

int c=45; //global  variable

int main (){
    float a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    int c=a+b;//local variable is more important to the code
    cout<<"the sum of a and b is:"<<c<<endl;
// to show global variable, we use scope resolution operator which is "::"
    cout<<"The value of global variable is:"<<::c<<endl;


    // ************* Float, double and long double Literals****************
    float g=34.4F;
    long double h = 34.4L; 
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    cout<<"The value of g is "<<g<<endl<<"The value of h is "<<h; 

     // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // *************Typecasting**************** 
    // int c = 45;   
    float d = 45.46;
    cout<<"The value of a is "<<(float)c<<endl;
    cout<<"The value of a is "<<float(c)<<endl;

    cout<<"The value of b is "<<(int)d<<endl;
    cout<<"The value of b is "<<int(d)<<endl;
    float & e= d; //reference variable
    cout<<"The value of e is "<<e<<endl;


    cout<<"The expression is "<<c + d<<endl;
    cout<<"The expression is "<<c + int(d)<<endl;
    cout<<"The expression is "<<c + (int)d<<endl;
    cout<<"The expression is "<<float(c) + int(d)<<endl;
    
    int n = 3;
    char v = 'C';

    // Convert char data type into integer
    cout << (int)v << endl;
    
    int sum = n + v;
    cout << sum;
    return 0;

//     Data Type Modifiers
// Data type modifiers are the keywords used to change or give extra meaning to already existing data types. It is added to primitive data types as a prefix to modify their size or range of data they can store. There are 4 type modifiers in C++: short, long, signed and unsigned.

// For Example, defining an int with long type modifier will change its size to 8 bytes:
}