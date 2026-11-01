#include<stdio.h>
int main(){
int i=8;
int*j;
j=&i;
printf("Add i=%u\n",&i); //give us the address of i
printf("Add i=%u\n",j);  //give us the address of i
printf("Add j=%u\n",&j); //give us the address of j
printf("value i=%d\n",i);           //give us the value of i
printf("value i=%d\n",*(&i));       //give us the value of i
printf("value i=%d\n",*j);          //give us the value of i
    return 0;
}