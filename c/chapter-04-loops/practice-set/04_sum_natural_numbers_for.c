// Practice 4.4: Sum of first 10 natural numbers (for)
// Question: Solve 4.3 again using a for loop (and a do-while version,commented out).

#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    // do
    // {
    //     sum+=i;
    //     i++;
    // } while (i<=10);
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first ten natural numbers is %d", sum);
    return 0;
}
