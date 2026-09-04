#include <iostream>
using namespace std;

int main()
{
  int a = 4;
  int *ptr = &a;

  // NEW keyword
  int *p = new int(40);
  cout << "the value at address p is " << *p << endl;

  float *f = new float(20.484);
  cout << "the value at address f is " << *f << endl;

  int *arr = new int[3];
  arr[0] = 10;
  *(arr + 1) = 20;
  arr[2] = 30;

  delete[] arr;
  cout << "the value of arr[0] is " << arr[0] << endl;
  cout << "the value of arr[1] is " << arr[1] << endl;
  cout << "the value of arr[2] is " << arr[2] << endl;

  // DELETE operator

  return 0;
}

/*
1) Used when we don't know the size of the data before runtime
int n;
cin>>n;

int *marks = new int[n];

used when we d not know the number of people to be added at the start 
in this way we can inpput the number of inputs at the runtime

2) Used for large allocations as new uses RAM
int *arr = new int[100000000];

DELETE 
1. syntax for all 
delete ptr;
for arrays
delete[] arr
*/