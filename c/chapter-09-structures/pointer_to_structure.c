// Topic: Pointer to a structure
// Accesses struct members through a pointer with the arrow operator.

#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code=55;
    struct employee *ptr;
    ptr=&e1;

    printf("%d\n",ptr->code); //exactly same as (*ptr).code
    

    return 0;
}
