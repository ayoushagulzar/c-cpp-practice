// Topic: Reading numbers from a file
// Opens numbers.txt and reads two integers with fscanf().
// Note: Run from inside this folder so numbers.txt can be found.

#include<stdio.h>

int main(){
    FILE*ptr;
    ptr= fopen("numbers.txt","r");
    if (ptr == NULL) { printf("numbers.txt not found\n"); return 1; }
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);

    fclose(ptr);
    
    return 0;
}
