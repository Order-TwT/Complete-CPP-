#include <iostream>
using namespace std;

/* 
Instead of using setters and getters in a class we can use constructors
It is a special member function with the same name as the class used to initialize the memerbs
It is automatically executed, whenever an object is created
*/

class Complex
{
    int a, b;

public:
    Complex(){
    a = 0;
    b = 0;
} // constructor declaration

    void printNumber()
    {
        cout<<"Hello T-T \n";
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};


//ALTERNATE WAY TO USE A MEMBER FUNCTION OF CLASS
// Complex::Complex() // This is a default constructor as it takes no parameter
// {
//     a = 0;
//     b = 0;
// }
int main()
{
    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

/*
1. It should be declared in the public sextion of  the class
2. Automatically invoked for every object
3. doesn't have return type as it does not return value
4. It can have default arguements 
5. We cannot refer to their address
*/