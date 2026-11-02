// Practice 3.3: Income tax calculator
// Question: Calculate income tax using slabs: 2.5L-5L at 5%, 5L-10L at 20%, above 10L at 30%.

#include <stdio.h>
int main()
{
    int income;
    float tax = 0; /* income below 2.5L pays no tax */
    printf("Enter income: ");
    scanf("%d", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else if (income >= 1000000)
    {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.2f\n", tax);
    return 0;
}
