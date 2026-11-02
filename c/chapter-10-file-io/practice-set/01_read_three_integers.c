// Practice 10.1: Read three integers
// Question: Read three integers from a file.
// Note: Reads three_numbers.txt

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("three_numbers.txt", "r");
    if (ptr == NULL) { printf("three_numbers.txt not found\n"); return 1; }
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The values are %d %d %d\n", num1, num2, num3);

    fclose(ptr);

    return 0;
}
