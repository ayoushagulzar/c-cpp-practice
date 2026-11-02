// Topic: malloc()
// Allocates memory for n ints at runtime.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    printf("How many ints? (2 or more): ");
    scanf("%d",&n);
    ptr=(int*) malloc(n* sizeof(int));
    ptr[0]= 3;
    ptr[1]= 6;

    printf("%d\n",ptr[0]);
    free(ptr);
    

    
    return 0;
}
