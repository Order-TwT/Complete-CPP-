//doesn't work 


#include<iostream>
using namespace std;

int main(){
    int k;
    string num; // Read input as string Because the number is too large for integers.
    cin>>k>>num;
    long long maxProd = 0;
    for (int i = 0; i < num.size() - k; i++)
    {
        long long product = 1;

        bool zeroFound = false;
    for (int j = 0; j< i+ k; j++)
    {
        if(num[j]=='0'){
            zeroFound=true;
            break;
        }
        product *=(num[j]-'0');
    }
    
    if(!zeroFound){
        maxProd = max(maxProd,product);
    }
}

cout<<maxProd<<endl;
    return 0;
}