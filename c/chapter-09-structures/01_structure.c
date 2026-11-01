#include<stdio.h>
#include<string.h>

struct employee
{
   int code;
   float salary;  //This declares a new user defined data
   char name[10];

};  //semicolon is important

int main(){
    struct employee e1, e2;
    e1.code=4511;
    strcpy(e1.name, "AINI");
    e1.salary=54.44;

    printf("%d %.2f %s\n", e1.code,e1.salary,e1.name);
    
    return 0;
}