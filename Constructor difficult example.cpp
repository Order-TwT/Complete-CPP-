#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    friend double distance(Point, Point);
};

double distance(Point p1, Point p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                (p2.y - p1.y) * (p2.y - p1.y));
}

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter first point (x y): ";
    cin >> x1 >> y1;

    cout << "Enter second point (x y): ";
    cin >> x2 >> y2;

    Point p1(x1, y1);
    Point p2(x2, y2);

    cout << "Distance = " << distance(p1, p2);

    return 0;
}