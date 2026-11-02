// Practice 1.2: Circle area and cylinder volume
// Question: Calculate the area of a circle, then use it to find the volume of a cylinder.

#include <stdio.h>
int main()
{
    // AREA OF CIRCLE
    float pi;
    pi = 3.14;
    float radius;
    radius = 3.3;
    int height = 5;
    printf("The area of circle is %f\n", pi * radius * radius);
    // VOLUME OF CYLINDER
    printf("The volume of cylinder is %f", pi * radius * radius * height);
    return 0;
}
