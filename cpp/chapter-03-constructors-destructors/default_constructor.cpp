// Topic: Default constructor
// A constructor with no parameters, called automatically when an object is
// created.

/* In C++, a constructor is a special member function of a class that is
automatically called when an object of the class is created. Its main purpose is to initialize objects.*/
// Key Features of a Constructor:
// -> Same name as the class
// -> No return type (not even void)
// -> Automatically invoked when an object is created
// -> should be declared in public section of class
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex();   //constructor declaration
    void printData()
    {
        cout << "The complex number is " << a << " + " << b << "i " << endl;
    }
};
Complex ::Complex() //This is a default constructor as it accepts no parameter
{
    a = 15;
    b = 12;
    cout << "Hello! I'm a constructor:)" << endl;
}
int main()
{
    Complex c1;
    c1.printData();

    return 0;
}
