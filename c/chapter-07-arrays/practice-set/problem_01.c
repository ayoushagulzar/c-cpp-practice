#include<stdio.h>
int main(){
int array[]={5,10,15,20,25,30,35,40,45,50};
int* ptr=array;
printf("The value at address %u is %d",ptr+2,*(ptr+2));
    return 0;
}
