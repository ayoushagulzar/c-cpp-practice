// Topic: Multiple inheritance
// One derived class inherits from three base classes at once.

#include <iostream>
using namespace std;

/* SYNTAX FOR MULTIPLE INHERITANCE
class {{derived_class_name}} : {{visibility_mode baseName1}} , {{visibility_mode baseName2}}...so on
{
        class methods/ members...etc
};*/
class Base1
{
protected:
    int baseint1;

public:
    void set_baseint1(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void set_baseint2(int b)
    {
        baseint2 = b;
    }
};
class Base3
{
protected:
    int baseint3;

public:
    void set_baseint3(int c)
    {
        baseint3 = c;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << baseint1 << endl;
        cout << "The value of base2 is " << baseint2 << endl;
        cout << "The value of base3 is " << baseint3 << endl;
        cout << "The sum of the values is " << (baseint1 + baseint2 + baseint3) << endl;
    }
};
int main()
{
    Derived D;
    D.set_baseint1(2);
    D.set_baseint2(5);
    D.set_baseint3(8);
    D.show();
    return 0;
}
