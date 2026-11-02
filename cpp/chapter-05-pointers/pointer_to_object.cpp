// Topic: Pointer to an object
// Creates an object with new and calls its methods through the pointer.

#include <iostream>
using namespace std;

class Complex
{
    int real;
    int imaginary;

public:
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void get_data()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // c1.set_data(2, 7);
    // c1.get_data();
    // OR
    Complex *ptr = new Complex;
    (*ptr).set_data(2, 7);
    (*ptr).get_data();
    ptr->get_data(); // -> is shorthand for (*ptr).
    delete ptr;
    return 0;
}
