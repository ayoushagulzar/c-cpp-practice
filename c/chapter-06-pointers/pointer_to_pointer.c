// Topic: Pointer to pointer
// A pointer that stores the address of another pointer (int **).

#include<stdio.h>
int main(){
 int i=8;
 int* j =&i;
 int** k=&j;
 printf("The value of i is %d\n",i);
 printf("The value of i is %d\n",*j);
 printf("The value of i is %d\n",*(&i));
 printf("The value of i is %d\n",**k);   // through the pointer to pointer
 printf("The address of i is %p\n",(void*)&i);
 printf("The address of j is %p\n",(void*)&j);
 printf("k holds        %p\n",(void*)k); // same as &j
    return 0;
}
