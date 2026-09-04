#include<iostream>
using namespace std;
// T is called a template parameter or placeholder type
template <class T>  //---> this means "I don't know the data type yet. The user will tell me later."
class vector{
     public:
    T *arr;
    int size;

   
        vector(int m){
            size = m;
            arr = new T[size];  //dynamic memory allocation 
        }
        T dotProduct(vector &v){
            T d =0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i]*v.arr[i];
                
            }
            return d;
        }
};
int main(){
    // vector v1(3);
    // v1.arr[0] = 2;
    // v1.arr[1] = 6;
    // v1.arr[2] = 4;
    // vector v2(3);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 5;


    vector <float>v1(3);
    v1.arr[0] = 2.1;
    v1.arr[1] = 6.4;
    v1.arr[2] = 4.5;
    vector <float>v2(3);
    v2.arr[0] = 1.7;
    v2.arr[1] = 0.3;
    v2.arr[2] = 5.9;

    float a = v1.dotProduct(v2);
    cout<<a;

    return 0;
}