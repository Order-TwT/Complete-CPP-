#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_rollno(int);
    void get_rollno();
};

void Student ::set_rollno(int r)
{
    roll_number = r;
}
void Student ::get_rollno()
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam ::get_marks()
{
    cout << "The marks received in maths are " << maths << endl;
    cout << "The marks received in physics are " << physics << endl;
}

class result : public Exam
{
public:
    void display()
    {
        get_rollno();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    1. If we are inheriting A--->B--->C then,
    a) A is base class for B, B is base class for C.
    b) A-->B-->C is the inheritance path



    */
    int x;
    cin >> x;
    float m, p;
    cin >> m >> p;
    result abhay;
    abhay.set_rollno(x);
    abhay.set_marks(m, p);
    abhay.display();

    return 0;
}