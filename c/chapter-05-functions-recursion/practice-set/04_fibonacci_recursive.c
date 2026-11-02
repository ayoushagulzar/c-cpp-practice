// Practice 5.4: nth Fibonacci number (recursive)
// Question: Print the nth term of the Fibonacci series (0, 1, 1, 2, 3, ...)
//           using recursion.
// Note: This recursive version recomputes the same terms many times. A loop
//       is much faster.

#include<stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if (n==1 || n==2)
    {
       return n-1;
    }
    
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
int n=9;
printf("The value of fabonacci series at %d is %d\n",n,fibonacci(n));
    return 0;
}
