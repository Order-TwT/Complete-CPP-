#include<iostream>
using namespace std;

int factorial (int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fib (int n){
    if(n<2){  // this is the base case, the point where you already know what is going to happej 
        return 1;
    }
    return fib(n-2) + fib(n-1);

}

void countdown(int n)
{
    if(n == 0)
        return;

    cout << n <<endl;

    countdown(n - 1);
}


int main(){
    // factorial of a number
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<factorial(n)<<endl;

    int c; 
    cin>>c;
    cout << "the term at postion "<< c<<" is "<<fib(c)<<endl;
    
int t;
cout<<"Enter the required time: ";
cin>>t;
countdown(t);

cout<<endl;


int x;
cin>>x;
// writing the fibonacci sequence 
for (int i = 0; i < x; i++)
{
    cout<<fib(i)<<" ";/* code */
}

return 0;
}