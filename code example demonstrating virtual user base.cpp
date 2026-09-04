#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void get_number()
    {
        cout << "Your roll no. is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void get_marks()
    {
        cout << "Your result is: "
             << "\nmaths = " << maths
             << "\nphysics = " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(int a)
    {
        score = a;
    }

    void get_score()
    {
        cout << "Your score is " << score << endl;
    }
};
class Result : public Sports, public Test
{
private:
    float total_score;

public:
    void display()
    {
        total_score = maths + physics + score;
        get_number();
        get_marks();
        get_score();
        cout << "Your total score is " << total_score<<"/300" << endl;
    }
};
int main()
{
    Result Abhay;
    Abhay.set_number(5);
    Abhay.set_marks(99.4, 98.9);
    Abhay.set_score(95);
    Abhay.display();

    return 0;
}