// Practice 5.7: Star pattern
// Question: Print a star pattern with 1, 3, 5, ... stars per row (n rows).

#include<stdio.h>
int main(){
    int n=3;
    for (int i = 0; i < n; i++)
    {
        for ( int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
