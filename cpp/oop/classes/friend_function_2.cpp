/*
    🔄 C++ Swap Using Function – Notes

    1. Pass by Value (Default):
       - Function gets copies of variables.
       - Changes inside function DO NOT affect originals.

       Example:
       void swap(int x, int y) {
           int temp = x;
           x = y;
           y = temp;
       }

       int a = 5, b = 10;
       swap(a, b);  // a and b remain 5 and 10

    --------------------------------------------

    2. Pass by Reference (Correct Way to Swap):
       - Use & to pass original variables.
       - Changes inside function affect originals.

       Example:
       void swap(int &x, int &y) {
           int temp = x;
           x = y;
           y = temp;
       }

       int a = 5, b = 10;
       swap(a, b);  // a becomes 10, b becomes 5

    --------------------------------------------

    ✅ Summary:
    - Use pass-by-reference (int &x) to modify original variables.
    - Without &, C++ functions work with copies (pass-by-value).
*/
#include <iostream>
using namespace std;
class Y;
class X
{
    int value1;
    friend void exchanger(X &, Y &);

public:
    void indata(int a)
    {
        value1 = a;
    }
    void display()
    {
        cout << value1;
    }
};
class Y
{
    int value2;
    friend void exchanger(X &, Y &);

public:
    void indata(int b)
    {

        value2 = b;
    }
    void display()
    {
        cout << value2;
    }
};
void exchanger(X &a, Y &b)
{
    int temp = a.value1;
    a.value1 = b.value2;
    b.value2 = temp;
}
int main()
{
    X x1;
    x1.indata(45);
    cout << "\nThe value of x1 before exchange is ";
    x1.display();
    Y y1;
    y1.indata(98);
    cout << "\nThe value of y1 before exchange is ";
    y1.display();
    exchanger(x1, y1);
    cout << "\nThe value of x1 after exchange is ";
    x1.display();
    cout << "\nThe value of y1 after exchange is ";
    y1.display();

    return 0;
}