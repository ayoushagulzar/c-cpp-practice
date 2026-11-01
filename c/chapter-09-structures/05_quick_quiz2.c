#include<stdio.h>
#include<string.h>

struct employee
{
   int code;
   float salary; 
   char name[10];
};  
void show(struct employee e);

void show(struct employee e){
    printf("Code is %d\n",e.code);
    printf("Salary is %.2f\n",e.salary);
    printf("Name is %s\n",e.name);
    
    
}

int main(){
    struct employee e1, e2;
    e1.code=4511;
    strcpy(e1.name, "AINI");
    e1.salary=54.44;
show(e1);
    
    return 0;
}