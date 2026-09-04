#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    /* Properties of friend function
    1. not a member function of the class, but is allowed to do work with private parts
    2. since it is not in scope of class it cannot be called from object of that class
       ie. class c1.sumcomplex()==invalid
    3. usually takes objects as arguemnts
    4. can be declared in both public or priavte
    5. cannot access members directly by names and need object_name.member_name to access

    */
    friend complex sumComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    // o3.a = o1.a + o2.a;
    // o3.b = o1.b + o2.b;
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 2);
    c2.printNumber();

    sum=sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}