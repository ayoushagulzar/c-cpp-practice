// Uses of `this`:
//    - To refer to current object's members.
//    - To solve naming conflicts (e.g., when parameter name = member name).
//    - To return the object from a method (for method chaining).
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
class B
{
    int b;

public:
    B &setData(int b)
    {
        this->b = b;
        return *this;
    }

    void getData()
    {
        cout << "The value of b is " << b << endl;
    }
};

int main()
{
    A a;
    a.setData(4);
    a.getData();

    B b;
    b.setData(45).getData();

    return 0;
}
