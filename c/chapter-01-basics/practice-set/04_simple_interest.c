// Practice 1.4: Simple interest
// Question: Calculate simple interest for a given principal, rate and time (SI = P * R * T / 100).

#include <stdio.h>
int main()
{
    int P = 2000;
    float R = 2.05;
    int T = 2;
    float SI = P * R * T / 100;
    printf("The interest is %f", SI);
    return 0;
}
