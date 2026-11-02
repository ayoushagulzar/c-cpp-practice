// Practice 6.1: Address and value of a variable
// Question: Print the address of a variable, then use it to print the
//           variable's value.

#include<stdio.h>
int main(){
int x=12;
int*j=&x;
printf("The address of x is %p\n",(void*)j);
printf("The value of x is %d\n",*j);

    return 0;
}
