#include<stdio.h>
int sum(int,int); //Function prototype
int sum(int x, int y){ //Function defination
printf("The sum is %d\n",x+y);
 return x+y;
  }
int main()
{ 
int a=23;
int b=45;
sum(a,b); //Function call

int a1=268;
int b1=952;
sum(a1,b1);

int a2=589;
int b2=59;
sum(a2,b2);

int a3=5163;
int b3=812;
sum(a3,b3);

int a4=12;
int b4=34;
sum(a4,b4);




      return 0;
}
