// Practice 7.3: Table of n in an array
// Question: Same as 7.2, but for a number n entered by the user.

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i]=n*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
    printf("The value of %d X %d = %d\n",n,i+1,arr[i]);
    
    }
    
    
    return 0;
}
