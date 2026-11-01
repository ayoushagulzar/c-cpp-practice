#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;
    friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumComplex(complex o1, complex o2);
    void printData()
    {
        cout << "The complex number is " << a << " + " << b << "i " << endl;
    }
};
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumReal(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }
    int sumComplex(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};
int main()
{
    complex c1, c2;
    c1.setData(2, 3);
    c1.printData();
    c2.setData(6, 7);
    c2.printData();
    Calculator C1;
    int result = C1.sumReal(c1, c2);
    cout << "The sum of real parts of c1 and c2 is: " << result << endl;
    cout << "The sum of complex parts of c1 and c2 is: " << C1.sumComplex(c1, c2);
    return 0;
}