#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Code of item is "<<id<<endl;
        cout<<"Price of item is "<<price<<endl;
    }
};
int main(){
    //   int id1, id2, id3;
    // float p1, p2, p3;

    // cout << "Enter id and price of object 1: ";
    // cin >> id1 >> p1;

    // cout << "Enter id and price of object 2: ";
    // cin >> id2 >> p2;

    // cout << "Enter id and price of object 3: ";
    // cin >> id3 >> p3;

    // Shop obj1(id1, p1);
    // Shop obj2(id2, p2);
    // Shop obj3(id3, p3);

    // obj1.getData();
    // obj2.getData();
    // obj3.getData();


    int size = 3;
    Shop *ptr = new Shop[size]; // making an array which is dynamically allocated memory 
    Shop *ptrtemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;

        ptr->setData(p,q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number "<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    
    
    
    
    
    
    return 0;
}