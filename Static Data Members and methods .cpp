#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void SetData()
    {
        cout << "Enter the ID: ";
        cin >> id;
        count++;
    }

    void getData()
    {
        cout << "The ID of this employee is: "
             << id
             << " and this is employee number "
             << count << endl;
    }

    static void getCount()  // static functions only have access to static variable, not possible to change any other variable
    {
        cout << "The value of count is "
             << count << endl;

             // need to write class_name :: function_name(); to use static function 
    }
};

int Employee::count = 0;

int main()
{
    Employee Garima, Abhay, Ayush;

    Garima.SetData();
    Garima.getData();
    Employee::getCount();

    Abhay.SetData();
    Abhay.getData();
    Employee::getCount();

    Ayush.SetData();
    Ayush.getData();
    Employee::getCount();

    return 0;
}