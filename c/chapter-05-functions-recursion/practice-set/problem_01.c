#include<stdio.h>
float average(int a, int b, int c);
float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main(){
int a=15, b=18,c=25;
printf("The average of a,b & c is %.2f\n",average(a,b,c));
    return 0;
}