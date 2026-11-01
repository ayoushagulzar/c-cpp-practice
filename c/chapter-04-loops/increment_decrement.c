#include<stdio.h>
int main()
{
int i=2;
   printf("The value of i is %d\n",i);
   i=i+6; //8
    printf("The value of i is %d\n",i++); //8
    printf("The value of i is %d\n",i);   //9
    printf("The value of i is %d\n",++i); //10 
    /*i++ prints i first then increment i
    ++i increment i first then print i */
    printf("The value of i is %d\n",i--); //10
    printf("The value of i is %d\n",--i); //8
    return 0;
}