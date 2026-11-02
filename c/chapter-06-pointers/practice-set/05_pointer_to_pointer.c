// Practice 6.5: Value through a pointer to pointer
// Question: Print the value of a variable using i, *j, *(&i) and **k.

#include<stdio.h>
int main(){
int i=16;
int* j=&i;
int** k=&j;
printf("The value of i is %d\n",i);
printf("The value of i is %d\n",*j);
printf("The value of i is %d\n",*(&i));
printf("The value of i is %d\n",**k);
    return 0;
}
