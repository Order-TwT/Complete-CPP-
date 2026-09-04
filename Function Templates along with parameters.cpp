#include<iostream>
using namespace std;

// float funcAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAvg2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAvg(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}


template<class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
   cout<< funcAvg(3,2.4)<<endl;

   int x = 5, y =7;
   swapp(x,y);
   cout<<x<<" "<<y<<endl;
    return 0;
}