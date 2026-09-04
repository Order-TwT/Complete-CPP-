#include <iostream>
using namespace std;

class base
{
public:
    int var1 = 1;
    virtual void display()
    {
        cout << "Displaying base class variable " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2 =2;
    void display()
    {
        cout << "Displaying base class variable " << var1 << endl;
        cout << "Displaying derived class variable " << var2 << endl;
    }
};
int main()
{
    base* base_class_pointer;
    base base_object;
    derived derived_object;

    base_class_pointer = &derived_object;

    base_class_pointer->display();

    return 0;
}