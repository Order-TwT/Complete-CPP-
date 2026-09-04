#include<iostream>
using namespace std;

class Point{
    int a, b;
    public:
        Point(int x, int y){
            a=x;
            b=y;

        }

        void displayPoint(){
            cout<<"The point is ()"<<a<<","<<b<<")"<<endl;
        }

};

// Create a function to compute distance between 2 points.
int main(){
    
    Point p(1,1);
    p.displayPoint();
    Point q(-1,-1);
    q.displayPoint();


    return 0;
}