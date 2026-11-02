// Practice 6.4: Sum and average via pointers
// Question: Write functions that take two pointers and return the sum and the
//           average.

#include<stdio.h>
int sum(int*, int*);
float average(int*, int*);

int sum(int*a, int*b){
    return *a + *b;
}

float average(int*a, int*b){
    return (*a +*b)/2.0;
}
int main(){
    int a=15, b=36;
    printf("The sum of a and b is %d\n",sum(&a,&b));
    printf("The average of a and b is %.1f\n",average(&a,&b));
    return 0;

}
