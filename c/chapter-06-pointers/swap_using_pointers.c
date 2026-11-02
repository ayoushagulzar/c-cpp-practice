// Topic: Swap two numbers using pointers
// The classic use of call by reference: swapping the caller's variables.

#include<stdio.h>
void swap(int* a, int* b);

void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int a=6,b=4;
swap(&a,&b);
printf("The value of a is %d and the value of b is %d", a,b);
    return 0;
}
