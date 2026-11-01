#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;

int main()
{
    // typedef int Ayousha;
    // Ayousha a=77;
    // printf("The value of a is %d\n",a);
    emp e1;
    emp*ptr=&e1;
    e1.code = 4511;
    strcpy(e1.name, "AINI");
    e1.salary = 54.44;

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
     printf("%d %.2f %s\n", ptr->code,ptr->salary,ptr->name);
    return 0;
}
// in typedef we can make our own data type