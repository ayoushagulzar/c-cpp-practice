// Topic: Call by reference
// Passes addresses, so the function can change the caller's variables.

#include<stdio.h>
int sum(int*, int*);

int sum(int* a, int* b){
    *a=20;
      return *a+*b;
}
int main(){
    int x=15, y=19;
    printf("The sum of 15 and 19 is %d\n",sum(&x,&y));
    printf("The value of x is %d\n",x);
    
    return 0;
}
