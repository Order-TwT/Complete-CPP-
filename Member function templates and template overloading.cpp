#include <iostream>
using namespace std;
template <class T>
class Abhay
{
public:
    T data;
    Abhay(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Abhay<T>::display()
{
    cout << data;
}

void func(int a){
    cout<<"I am first func "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"I am Templatised function "<<a<<endl;
}

// between these two functions the nearest match is called to fulfill the command
int main()
{
    // Abhay<double> h(5.78);
    // cout << h.data << endl;
    // h.display();

    func(4);
    func(3.2);
    return 0;
}