// Practice 10.5: Double the number in a file
// Question: Read an integer from int.txt and replace it with twice its value.
// Note: Each run doubles the number stored in int.txt.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("int.txt", "r");
    fscanf(ptr, "%d", &num);

fclose(ptr);

 ptr = fopen("int.txt", "w");
   fprintf(ptr, "%d", num*2);

    fclose(ptr);
    return 0;
}
