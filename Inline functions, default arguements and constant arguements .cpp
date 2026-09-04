#include<iostream>
using namespace std;

//Inline functions--> instead of the code jumping from main to func and back and forth 
//main mein hi kaam ho jaega, tho it can only be used for smaller functions
inline int product(int a, int b){
   
   // don't use with inline function
    // static int c = 0;// executes only once
    // c=c+1// next time, value of c is retained
    return a*b;
}

float moneyreceived(int currentMoney, double factor=1.04 // this is a default arguements and must always stay at right side)
    {
    return currentMoney*factor;
}

//CONST is used to make sure arguement is not changed in the function

int main(){
    // int a,b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
   
// agar bhot zyada baar call karna hai function ko, toh aise karne mein time lagega
//so we use inline functions

int money = 1000;
cout<<"The money deposited is "<<money<< "money after one year is "<<moneyreceived(money)<<endl;
cout<<"The money deposited is "<<money<< "money after one year for VIPs is "<<moneyreceived(money,1.10);


return 0;
}