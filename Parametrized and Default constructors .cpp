#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // parametrized constructor takes value and sets it
    {
        a = x;
        b = y;
    } // constructor declaration

    void printNumber()
    {
        cout << "Hello T-T \n";
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // implicit call
    Complex a(4, 6);
    a.printNumber();

    // explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    return 0;
}