#include<iostream>
using namespace std;

void fun(int &x)
{
    x = x + 12;
}

int main(){
    int a = 28;
    fun(a);
    cout << a;
    return 0;
}