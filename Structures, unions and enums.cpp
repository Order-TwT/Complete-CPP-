#include<iostream>
using namespace std;

typedef struct Student
  {
    /* data */
    int SID;
    char favChar;
    float Salary;
  } st;  //if you do not want to ues struct Student everytime use typedef to change it to something shorter


// UNIONS ARE LIKE STRUCTRES BUT WITH BETTER MEMORY MANAGEMENT
// in structures teeno datatypes mein memory allot hoti hai and hence zyada memory lagegi but in union 
// maximum memory allot hogi (depending on the data type) and wahi sabke liye use hogi


union money
{ 
  /* data */
  int rice;
  char car;
  float pounds;
};


enum Meal{Breakfast,lunch, dinner};

//enum assigns  0,1,2,3.... to the items in the list



int main(){
    // A structure lets you group different types of data under one name.
  
st Abhay;
  st Aditya;
  st Ayush;
  st Krishiv;
  Abhay.SID=5;
  Abhay.favChar='a';
  Abhay.Salary = 5100000;
  
  cout<<"The value is "<<Abhay.SID<<endl;
  cout<<"The value is "<<Abhay.favChar<<endl;
  cout<<"The value is "<<Abhay.Salary<<endl;




  


  union money m1;
  m1.rice=34;
  m1.car='c';
  cout<<m1.car<<endl;



// Meal m1 = Breakfast;
// cout<<m1<<endl;  // will print 0 as breakfast is the first item in the list and hence assigned 0

cout<<Breakfast;
cout<<lunch;
cout<<dinner;


  
    return 0;
}