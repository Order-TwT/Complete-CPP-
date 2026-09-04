#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int x = 4;
    cout<<x<<endl;

    // manipulators are commands that change how the output looks 
    // first exaple is endl 
// second manipulator is "setw" but we need to use 
// #include<iomanip> to use setw 
    cout<<"Hi, My name is Abhay"<<endl;
    int a=3,b=86,c=69;
    cout<<"The value of a is: "<<a<<endl;
 cout<<"The value of b is: "<<b<<endl;
  cout<<"The value of c is: "<<c<<endl;

  // WITH SETW
  //In C++, setw stands for “set width” 
  //and is used to control the width of the output field when printing values (mostly with cout).
//It is part of the <iomanip> library.
//Sets the minimum width of the next output
//If the value is shorter → spaces are added (by default, on the left)
//If the value is longer → it prints normally (no cutting)
   cout<<"The value of a is: "<<setw(4)<<a<<"Lol this is weird"<<endl;
 cout<<"The value of a is: "<<setw(4)<<b<<endl;
  cout<<"The value of a is: "<<setw(4)<<c<<endl;

cout<<"New text line nidfnjinrehgukhskr"<<endl;

   cout << setw(5) << 1 << endl;
    cout << setw(5) << 12 << endl;
    cout << setw(5) << 123 << endl;

    //operator precedence 
    int f = 4, g= -5;
    int t = f*4+g;
    cout<<float(t);
  
     
    return 0;

}