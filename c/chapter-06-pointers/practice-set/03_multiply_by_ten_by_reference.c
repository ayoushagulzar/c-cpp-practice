// Practice 6.3: Multiply by 10 (by reference)
// Question: Change a variable to 10 times its value using call by reference.
// Note: Compare with 06_multiply_by_ten_by_value.c, where the change is lost.

#include<stdio.h>
void change_to_ten_times(int*);

void change_to_ten_times(int *a){
    *a= *a*10;
}
int main(){
    int x=67;
     printf("The value of x is %d\n",x);
    change_to_ten_times(&x);
     printf("The value of x is %d\n",x);
     return 0;

}
