// Topic: Default template parameters
// Template parameters with default types, used as MyClass<> or with explicit
// types.

#include <iostream>
using namespace std;

//NOTE; templates can be used for functions too(even without using class)
template <class T1 = int, class T2 = float, class T3 = char>
class MyClass
{
    T1 a;
    T2 b;
    T3 c;

public:
    MyClass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};
int main()
{
    MyClass<> obj(5, 8.9, 'G');
    obj.display();
    cout << endl;

    MyClass<float, char, int> obj1(16.87, 't', 10);
    obj1.display();

    return 0;
}
