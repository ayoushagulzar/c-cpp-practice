// Practice 5.6: Sum of first n natural numbers (recursive)
// Question: Calculate the sum of the first n natural numbers using recursion.

#include<stdio.h>
int sum_natural(int);
int sum_natural(int n){
    if (n==1)
    {
        return 1;
    }
    
    return sum_natural(n-1)+n;
}
int main(){
   int n=10;
    printf("The sum of first ten natural numbers is %d\n",sum_natural(n));
    return 0;
}
