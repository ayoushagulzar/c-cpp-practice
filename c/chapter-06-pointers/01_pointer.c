#include<stdio.h>
int main(){
int i=72;
 int* j=&i;  //j is a pointer pointing to i
printf("The adress of i is %u\n",&i);
printf("The adress of i is %u\n",j);

printf("The value at address j is %d\n",*j);

    return 0;
}