#include <iostream>
using namespace std;
// destructor frees up the space a constructor takes up.
//  doesn't take arguement nor does it return anything.
//That's why destructors are heavily used in professional C++ code, 
// especially in operating systems, game engines, browsers, databases, and large-scale backend systems.
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for the object number " << count << endl;
    }

    ~num()
    {
        cout << "this is the time when destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "in main function" << endl;
    cout << "creating first object n1" << endl;
    num n1;
    {
        cout << "entering this block" << endl;
        cout << "Creating two more objects " << endl;
        num n2, n3;
        cout << "exiting this block" << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}