// Topic: Recursion: factorial
// Computes n! recursively, with a step-by-step trace in the comments.

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
/*STEP BY STEP CALCULATION
factorial(5)=5*factorial(4);
factorial(5)=5*4*factorial(3);
factorial(5)=5*4*3*factorial(2);
factorial(5)=5*4*3*2*factorial(1);
factorial(5)=5*4*3*2*1;
factorial(5)=120;
*/
int main()
{
    int number = 5;
    cout << "The factorial of " << number << " is " << factorial(number);
    return 0;
}
