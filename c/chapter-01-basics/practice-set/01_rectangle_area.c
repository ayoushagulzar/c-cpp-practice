// Practice 1.1: Area of a rectangle
// Question: Read the length and breadth of a rectangle from the user and print its area.

#include <stdio.h>
int main()
{
    // AREA OF A RECTANGLE
    // int length=13;
    // int breadth=9;
    int length;
    int breadth;
    printf("Enter length\n");
    scanf("%d", &length);
    printf("Enter breadth\n");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d", length * breadth);
    return 0;
}
