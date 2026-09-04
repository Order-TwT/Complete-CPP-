//THERE ARE TWO TYPES OF HEADER FILES:
// 1. System Header files: Comes with the compiler
#include <iostream>
// 2. User defined header files written by programmer
// #include"this.h"

using namespace std;

int main(){
    int a=2,b=3;
    // Operators in C++
//1. Arithmetic operators
cout<<"The value of a+b is "<<a+b<<endl;
cout<<"The value of a-b is "<<a-b<<endl;
cout<<"The value of a*b is "<<a*b<<endl;
cout<<"The value of a/b is "<<a/b<<endl;
cout<<"The value of a%b is "<<a/b<<endl;
cout<<"The value of a++ is "<<a++<<endl;
// a++ prints a then adds 1 in the backend
cout<<"The value of a-- is "<<a--<<endl;
// a-- prints a and then subs 1 in the backend
cout<<"The value of ++a is "<<++a<<endl;
// ++a first adds 1 to a and then prints a+1
cout<<"The value of --a is "<<--a<<endl;
cout<<"\n";
// --a first subs 1 from a and then prints a-1

//2. Assignemnt operators:--> used to assign values 
    int c=5,d=8;
    char e= 'h';
//3. Comparison Operators:--> compare 2 values
cout<<"the following are comparison operators in C++"<<endl;
    cout<<"The value of c==d is "<< (c==d)<< endl;
    cout<<"The value of c!=d is "<< (c!=d)<< endl;
    cout<<"The value of c>=d is "<< (c>=d)<< endl;
    cout<<"The value of c<=d is "<< (c<=d)<< endl;
    cout<<"The value of c>d is "<< (c>d)<< endl;
    cout<<"The value of c<d is "<< (c<d)<< endl;

//4. Logical operators
cout<<"the following are logical operators in C++"<<endl;
cout<<"The value of logical and operator ((c==d) && (c<d)) is: "<< ((c==d)&&(c<d))<<endl;
//. LOGICAL AND gives TRUE only when both conditions are satisfied 
cout<<"The value of logical or operator ((c==d) || (c<d)) is: "<< ((c==d)||(c<d))<<endl;
// LOGICAL OR gives TRUE when one of the condition is satisfied 
cout<<"The value of logical not operator (!(c==d) is: "<< (!(c==d))<<endl;
// reverses the answer. ! changes to 0 and vice versa
return 0;
}

