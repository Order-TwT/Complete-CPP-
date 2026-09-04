#include <iostream>
using namespace std;

// multiple inheritance syntax
/*
class derived : visibility mode base1, visibility mode base2
{
class body of derived
}
*/

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1int << endl;
        cout << "The value of base2 is " << base2int << endl;
        cout << "The value of base3 is " << base3int << endl;
        cout << "The value of sum of base1 and base2 is " << base1int + base2int + base3int << endl;
    }
};
int main()
{
    int a, b, c;
    cin >> a >> b>>c;
    derived Abhay;
    Abhay.set_base1int(a);
    Abhay.set_base2int(b);
    Abhay.set_base3int(c);
    Abhay.show();
    return 0;
}