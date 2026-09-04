#include<iostream>
#include<math.h>
using namespace std;
//you must put the function syntax at the start
//or use function prototype
//Func Proto--> Tells the comp ki aage kahi function diya hua hai baad mein 

// Function prototype
int power(int , int );

void greet();

int add(int a, int b=3){
    int sum=a+b;
    return sum;
}

int main(){
    int num1, num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    cout<<"Power is "<<power(num1,num2)<<endl;
    greet();

    cout<<"The Sum is: "<<add(2);

        return 0;
}


void greet(){
    cout<<"Hello,Baby!!";
}
int power(int a, int b){
    int c=pow(a,b);
    return c;
}