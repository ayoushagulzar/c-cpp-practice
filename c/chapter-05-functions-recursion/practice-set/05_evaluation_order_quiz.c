// Practice 5.5: Output question (++ in printf)
// Question: Predict the output of printf("%d %d %d", a, ++a, a++).

// Note: Undefined behaviour: modifying 'a' twice in one call has no
//       guaranteed result. Never write code like this.

#include<stdio.h>
int main(){
    int a=6;
    printf("%d %d %d\n",a,++a,a++);
/* 8 8 6 and 6 7 7 both are correct
it just depends on evaluation orders*/
    return 0;
}
