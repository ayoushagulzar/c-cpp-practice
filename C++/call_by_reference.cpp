#include <iostream>
using namespace std;

int &swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int num1 = 5, num2 = 7;
    cout << "The value of first number is " << num1 << " and the value of second number is " << num2 << endl;
    swap(num1, num2) = 12;
    cout << "The value of first number is " << num1 << " and the value of second number is " << num2;
    return 0;
}