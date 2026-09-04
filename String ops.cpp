#include<iostream>
#include<string>
#include<math.h>
#include<cmath>
using namespace std;
  
int main(){
    string s = "Hello";
    cout<<s.length()<<endl;      
    cout<<s.at(1)<<endl;         
    cout<<s.substr(2, 10)<<endl;  
    s += " World";   
    cout<<s;
    return 0;
}