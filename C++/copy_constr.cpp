/*A copy constructor is a special type of constructor that creates a new object by copying the values
 from another object of the same class.*/
// SYNTAX: ClassName(const ClassName &obj);
// NOTE: when no copy constr: found, compiler supplies its own copy contructor.

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        a = obj.a;
        cout << endl
             << "Copy constructor is called!" << endl;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};
int main()
{
    Number x, y, z(20), z2;
    x.display();
    y.display();
    z.display();
    Number z1(x); // copy constructor invoke
    z1.display();
    z2 = z;        // copy constructor does not invoke
    Number z3 = z; // copy constructor invoke

    return 0;
}
