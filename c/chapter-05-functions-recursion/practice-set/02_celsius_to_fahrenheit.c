// Practice 5.2: Celsius to Fahrenheit function
// Question: Write a function that converts Celsius to Fahrenheit.

#include<stdio.h>
float c2f(float c);
float c2f(float c){
    return (9.0/5)*c+32;
}
int main(){
    float c=38.9;
    printf("Celsius to Farenheit for %.2f is %.2f\n",c,c2f(c));
    return 0;
}
