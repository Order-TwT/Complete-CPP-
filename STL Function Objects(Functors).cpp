#include<iostream>
#include<algorithm> //needed to use functors
using namespace std;

int main(){
    //function obejct: functions wrapped in class so it is availbale liek an object
    int arr[]={1,4,6,93,75,12};
    sort(arr,arr+5); // sorts sonly the first 5 elements in ascending order
    sort(arr,arr+5, greater<int>()); // sorts sonly the first 5 elements, but now sice we use the funtion obejct greater<int>() it sorts in descending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}