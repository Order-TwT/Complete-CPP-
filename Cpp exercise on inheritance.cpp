#include<iostream>
#include<cmath>
using namespace std;
/*
create 2 classes 
1. simple calc- takes input of 2 numbers using utility function and performs +,-,*,'/  and displays result using another func
2. scientific calc - take 2 input and perform any 4 scientific ops of your chocie

create another class HybridCalc and inherit these 2:
Q1. what is this inheritance called?
Q2. Which mode are we using? 
Q3. create an object of Hybrid calc amd display results of simple and scientific calc
Q4. How is code reuasblilty implememnted?
*/

class SimpleCalc
{
protected:
    double a, b;

public:
    void getSimpleInput()
    {
        cout << "Enter two numbers for Simple Calculator: ";
        cin >> a >> b;
    }

    void displaySimple()
    {
        cout << "\n----- Simple Calculator -----\n";
        cout << "Addition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Division not possible (division by zero)\n";
    }
};

class ScientificCalc
{
protected:
    double x, y;

public:
    void getScientificInput()
    {
        cout << "\nEnter two numbers for Scientific Calculator: ";
        cin >> x >> y;
    }

    void displayScientific()
    {
        cout << "\n----- Scientific Calculator -----\n";
        cout << "sin(" << x << ") = " << sin(x) << endl;
        cout << "cos(" << x << ") = " << cos(x) << endl;
        cout << x << "^" << y << " = " << pow(x, y) << endl;
        cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
    }
};

class HybridCalc : public SimpleCalc, public ScientificCalc
{
    public:
    void welcome(){
        cout<<"Hello, please input the numbers "<<endl;
    }
};

int main()
{
    HybridCalc obj;

    obj.welcome();
    obj.getSimpleInput();
    obj.displaySimple();

    obj.welcome();
    obj.getScientificInput();
    obj.displayScientific();

    return 0;
}