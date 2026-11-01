#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    complex()
    {
        a = 2;
        b = 3;
    }
    complex(int x)
    {
        a = x;
        b = 6;
    }
    void printData()
    {
        cout << "The complex number is " << a << " + " << b << "i " << endl;
    }
};
int main()
{
    complex c1(2, 5), c2, c3(3);
    c1.printData();
    c2.printData();
    c3.printData();

    return 0;
}