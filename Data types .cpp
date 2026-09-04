//Data types specify the type of data that a variable can store. 
// Whenever a variable is defined in C++, the compiler allocates memory for that variable based on the data type with which it is declared. 
// Please note that every may require a different amount of memory.



// int -- Integer data type denotes that the given variable can store the integer numbers. The keyword used to define integers is int.
//  Its size is 4-bytes (for 64-bit) systems 
//  can store numbers for binary, octal, decimal and hexadecimal base systems in the range from -2,147,483,648 to 2,147,483,647.

// The void data type represents the absence of value. 
// We cannot create a variable of void type.
//  It is used for pointer and functions that do not return any value using the keyword void.
#include <iostream>
using namespace std;

int glo = 69;
void sum(){
    int x;
    cout<< glo<<"\n";
}

int main(){
    int glo=9;
    glo=90;
    sum();
    cout<<glo<<"\n";


    // Creating an integer variable
    int x = 25;
    cout << x << endl;

    // Using hexadecimal base value
    x = 0x15;
    cout << x<< '\n';


   


// float-- decimals



    // Floating point variable with a decimal value
    float f = 36.5;
    cout << f<< '\n';



// bool-- gives 0 for false or 1 for true 



    // Creating a boolean variable
    bool isTrue = true;
    bool t=true;
    
    cout << t<< '\n';

   

// char -- stores single character 



    // Character variable
    char c = 'A';
    cout << c<< '\n';



// double stores decimals with higher precision 



    // double precision floating point variable
    double pi = 3.1415926535;
    std::cout << pi<<"\n";


    int q =12, s= 17;
float d = 7.42;
cout<<"Today is Sunday.\nThe value of a is"<<q<<".\n The value of b is "<<s;
cout<<"\n The value of pi is "<< d;
cout<<"\n The value of pi is "<< d;
return 0;}




































































































































































































































