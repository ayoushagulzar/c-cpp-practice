// Topic: Pointers to char and float
// Pointers work the same way for every data type: char*, float*, and so on.

#include<stdio.h>
int main(){
 char i='B';
 char* j=&i;  //j is a pointer pointing to i
 float k=23.5;
 float* k1=&k;
printf("The address of i is %p\n",(void*)j);
printf("The address of i is %p\n",(void*)&i);
printf("The address of k is %p\n",(void*)k1);

printf("The value at address j is %c\n",*j);
printf("The value at address k1 is %.1f\n",*k1);


    return 0;
}
