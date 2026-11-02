// Practice 1.3: Celsius to Fahrenheit
// Question: Convert a temperature from Celsius to Fahrenheit using F = (9/5)C + 32.

#include <stdio.h>
int main()
{
    float c = 37.0;
    float f;
    f = ((9.0 / 5.0) * c) + 32;
    printf("The temperature of room is %f", f);
    return 0;
}
