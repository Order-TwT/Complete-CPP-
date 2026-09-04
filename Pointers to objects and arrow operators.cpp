#include<iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void getData(){
        cout<<"Real part is "<<real<<endl;
        cout<<"Imaginary part is "<<imaginary<<endl;
    }
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }
};
int main(){
    // Complex c1;
    // Complex *ptr = &c1; //pointer to object

    //ARROW OPERATOR 

    Complex *ptr = new Complex; // also a way to make object 
     ptr ->setData(1,3); //is good
    // c1.setData(1,3);
    // (*ptr).setData(1,3);


    ptr ->getData();
    // c1.getData();
    //(*ptr).getData();

    Complex *p = new Complex[3];
    p->setData(1,4);
    p->getData();

    (p+1)->setData(2,5);
    (p+1)->getData();
    
   
    return 0;
}