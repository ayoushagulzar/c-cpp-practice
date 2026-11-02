// Practice 10.4: Save employee salaries
// Question: Read names and salaries of two employees and save them to salary.txt.

#include <stdio.h>

int main()
{
    FILE *ptr;
    char name1[30];
    char name2[30];
    int salary1, salary2;
    ptr = fopen("salary.txt", "w");

    printf("Enter the name of Employee: \n");
    scanf("%29s", name1);

    printf("Enter the salary of Employee: \n");
    scanf("%d", &salary1);

    printf("Enter the name of Employee 2: \n");
    scanf("%29s", name2);

    printf("Enter the salary of Employee 2: \n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ",");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ",");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');
    fclose(ptr);

    return 0;
}
