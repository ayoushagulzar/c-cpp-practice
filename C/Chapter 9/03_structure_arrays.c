#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee Hadi = {100, 71.22, "Hadi"};
    printf("%d %.2f %s\n", Hadi.code, Hadi.salary, Hadi.name);

    return 0;
}