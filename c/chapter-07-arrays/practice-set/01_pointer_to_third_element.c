// Practice 7.1: ptr + 2 points to the third element
// Question: Create an array of 10 numbers and use pointer arithmetic to
//           verify that ptr + 2 points to the third element.

#include<stdio.h>
int main(){
int array[]={5,10,15,20,25,30,35,40,45,50};
int* ptr=array;
printf("The value at address %p is %d\n",(void*)(ptr+2),*(ptr+2));
printf("array[2] is %d, so ptr+2 points to the third element\n",array[2]);
    return 0;
}
