#include <iostream>
using namespace std;

// forward declaration---> used to tell the compiler that there is a class
// used when we use an object of another class in first class

class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex, complex); // we cannot use the full function here
    int sumCompComplex(complex, complex); // as we aven't defined what the complex class is made up of
};

class complex
{
    int a, b;

    // Rather than individually declaring each function a friend, we can make the whole class a friend.
    // using this all function of that class will be declared friend functions and can access the private data of another class

    // friend int Calculator ::sumRealComplex(complex o1, complex o2);
    // friend int Calculator ::sumCompComplex(complex o1, complex o2);

    // friend function allows a function to access the private data of a class

    // this allows all funciton of calculator class to access private data of complex class
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(2, 3);
    o2.setNumber(1, 4);

    Calculator calc;
    int res1 = calc.sumRealComplex(o1, o2);
    int res2 = calc.sumCompComplex(o1, o2);
    cout << "the sum of real numbers of o1 and o2 is " << res1 << " and the sum of the complex parts is " << res2 << endl;
    return 0;
}