// Topic: calloc()
// Like malloc(), but takes a count and an element size and sets all bytes to zero.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("How many ints? (2 or more): ");
    scanf("%d",&n);
    ptr=(int*) calloc(n, sizeof(int));
    ptr[0]= 3;
    ptr[1]= 6;

    printf("%d\n",ptr[1]);
    printf("%d\n",ptr[n-1]); // calloc sets everything to 0
    free(ptr);
    

    
    return 0;
}
