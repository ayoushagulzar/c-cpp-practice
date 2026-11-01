#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)  // a constructor which accepts parameters..
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "The point is (" << x << " , " << y << ")" << endl;
    }
    friend double distance(point, point);
};
double distance(point p1, point p2)
{
    double result = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    cout << "The difference between points is " << result;
    return result;
}
int main()
{
    point p1(6, 9);
    p1.display();

    point p2(4, 3);
    p2.display();

    distance(p1, p2);

    return 0;
}