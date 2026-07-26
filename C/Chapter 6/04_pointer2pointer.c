#include<stdio.h>
int main(){
 int i=8;
 int* j =&i;
 int** k=&j;
 printf("The value of i is %d\n",i);
 printf("The value of i is %d\n",*j);
 printf("The value of i is %d\n",*(&i));
 printf("The address of j is %p\n",&i);
    return 0;
}