#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;
    friend double calDistance(Point m, Point n);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

double calDistance(Point m, Point n)
{
    double res;
    res = sqrt(pow(n.x - m.x, 2) + pow(n.y - m.y, 2));
    return res;
}
int main()
{
    Point p(1, 1);
    p.displayPoint();
    Point q(4, 6);
    q.displayPoint();
    double result = calDistance(p, q);
    cout << "The distance between two points is " <<result <<endl;
    return 0;
}

// Distance between two points