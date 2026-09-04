#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// HOW TO CHANGE VARIABLES
// This is will not swap
int swap(int a, int b)
{
    int temp = a; // This is call by value
    a = b;
    b = temp;
}

int swapPointer(int *x, int *y)
{
    int temp = *x; // This is call by reference using pointers
    *x = *y;       //(value at address a = value at address b)
    *y = temp;
}

int swapReference(int &x, int &y)
{
    int temp = x; // This is call by reference
    x = y;
    y = temp;
}

int main()
{
    int a = 4, b = 5;
    cout << "The sum of a and b is :" << sum(a, b) << endl;

    // CALL BY VALUE
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    swap(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;

    // CALL BY REFERENCE USING POINTERS
    int c = 6, d = 7;
    cout << "The value of c is " << c << " and the value of d is " << d << endl;
    swapPointer(&c, &d);
    cout << "The value of c is " << c << " and the value of d is " << d << endl;

    // CALL BY REFERENCE
    cout << "The value of c is " << c << " and the value of d is " << d << endl;
    swapReference(c, d);
    cout << "The value of c is " << c << " and the value of d is " << d << endl;
    return 0;
}