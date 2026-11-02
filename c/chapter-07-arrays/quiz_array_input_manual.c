// Topic: Quick quiz: array input without a loop
// Reads 5 marks one scanf() at a time. Compare with 02 to see why loops help.

#include <stdio.h>
int main()
{
    int marks[5];

    printf("Enter marks of 5 students\n");

    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    return 0;
}
