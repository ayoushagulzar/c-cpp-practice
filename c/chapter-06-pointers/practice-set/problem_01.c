#include<stdio.h>
int main(){
int x=12;
int*j=&x;
printf("The address of x is %u\n",&x);
printf("The value of x is %d\n",*(&x));

    return 0;
}