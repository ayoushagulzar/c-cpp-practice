#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    float num1;
    float num2;

public:
    void get_data()
    {
        cout << "\nEnter the value of first number: ";
        cin >> num1;
        cout << "\nEnter the value of second number: ";
        cin >> num2;
        cout << "Simple Calculator input: " << endl;
        cout << "First Number " << num1 << endl;
        cout << "Second Number " << num2 << endl;
    }
    void display_data()
    {
        cout << "The sum of first and second number is " << (num1 + num2) << endl;
        cout << "The difference of first and second number is " << (num1 - num2) << endl;
        cout << "The product of first and second number is " << (num1 * num2) << endl;
        cout << "The quotient of first and second number is " << (num1 / num2) << endl;
    }
};

class ScientificCalculator
{
    int number1;
    int number2;

public:
    void get_numbers()
    {
        cout << "\nEnter the value of number1 : ";
        cin >> number1;
        cout << "\nEnter the value of number2: ";
        cin >> number2;
        cout << "Scientific Calculator input: " << endl;
        cout << "First Number " << number1 << endl;
        cout << "Second Number " << number2 << endl;
    }
    void display_numbers()
    {
        cout << "cos (" << number1 << ") = " << cos(number1 * M_PI / 180) << endl;
        cout << "sin (" << number2 << ") = " << sin(number2 * M_PI / 180) << endl;
        cout << "exponent (" << number1 << ") = " << exp(number1) << endl;
        cout << "power (" << number1 << "," << number2 << ")  = " << pow(number1, number2) << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator R;
    R.get_data();
    R.display_data();
    R.get_numbers();
    R.display_numbers();

    return 0;
}