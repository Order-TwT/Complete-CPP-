#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;
    // float Yearly_Increment;
public:
    void setName()
    {
        cout << "Enter the name of the Employee: ";
        cin >> name;
    }
    void setId()
    {
        cout << "Enter your id: ";
        cin >> id;
    }

    void getId()
    {
        cout << "The ID of this employee is: " << id << endl;
    }
};
int main()
{

    // Abhay.setId();
    // Abhay.getId();

    // If the number of employees is too high then this gets difficult
    // Hence we use arrays

    Employee Google[4];
    for (int i = 0; i < 4; i++)
    {
        Google[i].setName();
        Google[i].setId();
        Google[i].getId();
    }

    return 0;
}