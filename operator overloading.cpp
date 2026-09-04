#include<iostream>
using namespace std;

// Operator Overloading --> giving additional meaning to operators for user defined objects
// it is compile time polymorphism 

/* GENERAL SYNTAX
return_type operator operator_symbol(parameters)
{
    // code
}*/
class Channel{
    int subscribers;
    public: 
    Channel(int s){
        subscribers = s;
    }
    void operator ++(){   //user defined 
        subscribers++;
    }
    void display(){
        cout<<subscribers;
    }
};
int main(){
    Channel gs(1000);
    ++gs; // or use gs.operator++() to call the fucntion 
    gs.display(); 
    return 0;
}