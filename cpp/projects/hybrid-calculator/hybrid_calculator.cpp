// Project: Hybrid calculator
// A menu-driven calculator. Simple mode does + - * / %; scientific mode does
// trig, inverse trig, exp, pow, sqrt and log. Built with multiple
// inheritance.

// Note: Colored output uses the Windows console API on Windows and ANSI
//       escape codes everywhere else.

#include <iostream>
#include <cmath>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

// Color codes follow the Windows console palette:
// 3 = aqua, 4 = red, 6 = yellow, 7 = white (default).
#ifdef _WIN32
void setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void setColorError(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), color);
}
#else
// On Linux/macOS, use ANSI escape codes instead of the Windows API.
const char *ansiColor(int color)
{
    switch (color)
    {
    case 3:
        return "\033[36m"; // cyan
    case 4:
        return "\033[31m"; // red
    case 6:
        return "\033[33m"; // yellow
    default:
        return "\033[0m"; // reset
    }
}
void setColor(int color) { cout << ansiColor(color); }
void setColorError(int color) { cerr << ansiColor(color); }
#endif

class SimpleCalculator
{
    int num1;
    int num2;
    char choice;

public:
    void get_data()
    {
        setColor(7); // white
        cout << "\nEnter the First number: ";
        cin >> num1;
        cout << "Enter the Second number: ";
        cin >> num2;
    }

    void perform_operations()
    {
        char again;
        do
        {
            cout << endl;
            setColor(3); // aqua
            cout << "\n============================================\n";
            cout << "|          SIMPLE CALCULATOR MENU          |\n";
            cout << "============================================\n";
            cout << "|     Addition (+)                         |\n";
            cout << "|     Subtraction (-)                      |\n";
            cout << "|     Multiplication (*)                   |\n";
            cout << "|     Division (/)                         |\n";
            cout << "|     Modulus (%)                          |\n";
            cout << "============================================\n";
            cout << endl;
            setColor(7);
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case '+':
                setColor(6);
                cout << "The sum of " << num1 << " and " << num2 << " is " << (num1 + num2) << endl;
                break;
            case '-':
                setColor(6);
                cout << "The difference of " << num1 << " and " << num2 << " is " << (num1 - num2) << endl;
                break;
            case '*':
                setColor(6);
                cout << "The product of " << num1 << " and " << num2 << " is " << (num1 * num2) << endl;
                break;
            case '/':
                if (num2 != 0)
                {
                    setColor(6);
                    cout << "The division of " << num1 << " and " << num2 << " is " << (float)num1 / num2 << endl;
                }
                else
                {
                    setColorError(4);
                    cerr << "Error: Division by zero is not allowed." << endl;
                }
                break;
            case '%':
                if (num2 != 0)
                {
                    setColor(6);
                    cout << "The remainder of " << num1 << " and " << num2 << " is " << (num1 % num2) << endl;
                }
                else
                {
                    setColorError(4);
                    cerr << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                setColorError(4);
                cerr << "Invalid operator!" << endl;
                break;
            }

            setColor(7);
            cout << "Press Enter key to continue...";
            cin.ignore();
            cin.get();

            cout << "\nDo you want to perform another operation with the same numbers? (y/n): ";
            cin >> again;
        } while (again == 'y' || again == 'Y');
    }
};

class ScientificCalculator
{
    double number1;
    double number2;
    int choice;

public:
    void perform_opts()
    {
        do
        {
            cout << endl;
            setColor(3);
            cout << "\n============================================\n";
            cout << "|       SCIENTIFIC CALCULATOR MENU         |\n";
            cout << "============================================\n";
            cout << "|  1. Cosine        (cos)                  |\n";
            cout << "|  2. Sine          (sin)                  |\n";
            cout << "|  3. Tangent       (tan)                  |\n";
            cout << "|  4. Arc Cosine    (acos)                 |\n";
            cout << "|  5. Arc Sine      (asin)                 |\n";
            cout << "|  6. Arc Tangent   (atan)                 |\n";
            cout << "|  7. Exponent      (exp)                  |\n";
            cout << "|  8. Power         (pow)                  |\n";
            cout << "|  9. Square Root   (sqrt)                 |\n";
            cout << "| 10. Logarithm     (log)                  |\n";
            cout << "| 11. Exit                                 |\n";
            cout << "============================================\n";
            cout << endl;
            setColor(7);
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Enter the angle in degrees: ";
                cin >> number1;
                setColor(6);
                cout << "cos(" << number1 << ") = " << cos(number1 * M_PI / 180) << endl;
                break;
            case 2:
                cout << "Enter the angle in degrees: ";
                cin >> number1;
                setColor(6);
                cout << "sin(" << number1 << ") = " << sin(number1 * M_PI / 180) << endl;
                break;
            case 3:
                cout << "Enter the angle in degrees: ";
                cin >> number1;
                setColor(6);
                cout << "tan(" << number1 << ") = " << tan(number1 * M_PI / 180) << endl;
                break;
            case 4:
                cout << "Enter a value between -1 and 1: ";
                cin >> number1;
                if (number1 >= -1 && number1 <= 1)
                {
                    setColor(6);
                    cout << "acos(" << number1 << ") = " << acos(number1) * 180 / M_PI << " degrees" << endl;
                }
                else
                {
                    setColorError(4);
                    cerr << "Invalid input! Must be between -1 and 1.\n";
                }
                break;
            case 5:
                cout << "Enter a value between -1 and 1: ";
                cin >> number1;
                if (number1 >= -1 && number1 <= 1)
                {
                    setColor(6);
                    cout << "asin(" << number1 << ") = " << asin(number1) * 180 / M_PI << " degrees" << endl;
                }
                else
                {
                    setColorError(4);
                    cerr << "Invalid input! Must be between -1 and 1.\n";
                }
                break;
            case 6:
                cout << "Enter a value: ";
                cin >> number1;
                setColor(6);
                cout << "atan(" << number1 << ") = " << atan(number1) * 180 / M_PI << " degrees" << endl;
                break;
            case 7:
                cout << "Enter the number: ";
                cin >> number1;
                setColor(6);
                cout << "exp(" << number1 << ") = " << exp(number1) << endl;
                break;
            case 8:
                cout << "Enter the base: ";
                cin >> number1;
                cout << "Enter the exponent: ";
                cin >> number2;
                setColor(6);
                cout << number1 << " raised to the power " << number2 << " = " << pow(number1, number2) << endl;
                break;
            case 9:
                cout << "Enter a number: ";
                cin >> number1;
                if (number1 >= 0)
                {
                    setColor(6);
                    cout << "sqrt(" << number1 << ") = " << sqrt(number1) << endl;
                }
                else
                {
                    setColorError(4);
                    cerr << "Invalid input! Cannot take square root of negative number.\n";
                }
                break;
            case 10:
                cout << "Enter a number: ";
                cin >> number1;
                if (number1 > 0)
                {
                    setColor(6);
                    cout << "log(" << number1 << ") = " << log(number1) << endl;
                }
                else
                {
                    setColorError(4);
                    cerr << "Invalid input! Must be greater than 0.\n";
                }
                break;
            case 11:
                setColor(3);
                cout << "Exiting scientific calculator...\n";
                break;
            default:
                setColorError(4);
                cerr << "Invalid choice! Please try again\n";
                break;
            }

            if (choice != 11)
            {
                setColor(7);
                cout << "Press Enter key to continue...";
                cin.ignore();
                cin.get();
            }

        } while (choice != 11);
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    void run()
    {
        int hybridChoice;
        do
        {
            cout << endl;
            setColor(3);
            cout << "\n===========================================\n";
            cout << "|            HYBRID CALCULATOR            |\n";
            cout << "===========================================\n";
            cout << "|          1. Simple Calculator           |\n";
            cout << "|          2. Scientific Calculator       |\n";
            cout << "|          3. Exit                        |\n";
            cout << "===========================================\n";
            cout << endl;
            setColor(7);
            cout << "Enter your choice: ";
            cin >> hybridChoice;

            switch (hybridChoice)
            {
            case 1:
                get_data();
                perform_operations();
                break;
            case 2:
                perform_opts();
                break;
            case 3:
                setColor(3);
                cout << "Exiting hybrid calculator..." << endl;
                setColor(7);
                cout << "Press Enter key to exit...";
                cin.ignore();
                cin.get();
                break;
            default:
                setColorError(4);
                cerr << "Invalid choice! Please try again\n";
                setColor(7);
                cout << "Press Enter key to continue...";
                cin.ignore();
                cin.get();
                break;
            }
        } while (hybridChoice != 3);
    }
};

int main()
{
    HybridCalculator calc;
    calc.run();
    return 0;
}
