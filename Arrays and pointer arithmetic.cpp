// arrays are used to store a collection of items of similar type
// instead of 2500 different variables, we can define an array of size 2500 to hold these variables
// memory address starts from 0 
// like lists in python 
#include<iostream>
using namespace std;

int main(){
    int marks[] = {23,34,45,67};
        // cout<<marks[0]<<endl;
        // cout<<marks[1]<<endl;
        // cout<<marks[2]<<endl;
        // cout<<marks[3]<<endl;
// USING ARRAYS USING FOR LOOP
        for (int i =0; i < 4; i++)
        {
            cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        }
//to print in reverse order
    for (int i =3; i >-1; i--)
        {
            cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        }
// USING ARRAYS USING WHILE LOOP
        // int i = 0;
        // while (i<4)
        // {
        //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl; 
        //    i++;   }


// //POINTERS AND ARRAYS

// int* p = marks;

// cout<<"The value of marks[0] is "<<*p<<endl;
// cout<<"The value of marks[1] is "<<*(p+1)<<endl;
// cout<<"The value of marks[2] is "<<*(p+2)<<endl;
// cout<<"The value of marks[3] is "<<*(p+3)<<endl;
        
// char arr[] = {'a', 'b', 'c', 'd', 'f'};

//     // Size of one element of an array
//     cout << "Size of arr[0]: " << sizeof(arr[0])
//     << endl;

//     // Size of  'arr'
//     cout << "Size of arr: " << sizeof(arr) << endl;

//     // Length of an array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Length of an array: " << n << endl;
    return 0;
}