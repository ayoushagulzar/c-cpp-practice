#include <stdio.h>

typedef struct employee
{
    int salary;
    float score;
} emp;

int main()
{

    emp e1;
    emp *ptr = &e1;
    ptr->salary = 44;
    ptr->score = 98.54;

    printf("The value of salary is %d and the value of salary is %.2f\n", ptr->salary, ptr->score);

    return 0;
}