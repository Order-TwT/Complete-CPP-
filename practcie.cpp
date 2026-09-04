#include<iostream>
using namespace std;
void pattern6(int n) {
    for(int i=0;i<n;i++){
        for(int j = 0; j<(n-i+1);j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    }
void pyramid(int n ){
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n-i+1; j++)
       {
         cout<<" ";
       }
       for (int j = 0; j < (2*i+1); j++)
       {
        cout<<"*";
       }
       for (int j = 0; j < n-i+1; j++)
       {
        cout<<" ";
       }
       cout<<endl;
    }
    
}
    int main(){
   pyramid(5);
    return 0;
}