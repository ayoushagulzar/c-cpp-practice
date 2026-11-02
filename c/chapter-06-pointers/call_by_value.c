// Topic: Call by value
// Passes copies of values to a function.

#include<stdio.h>
int sum(int, int);

int sum(int a, int b){
      return a+b;
}
int main(){
    printf("The sum of 25 and 67 is %d",sum(25,67));
    return 0;
}
