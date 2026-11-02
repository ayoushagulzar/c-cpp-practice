// Practice 3.2: Pass or fail
// Question: A student passes if the average is at least 40% and every subject
//           is at least 33%. Read marks for 3 subjects and print the result.

#include<stdio.h>
int main()
{
    int math;
    int english;
    int urdu;
    printf("Enter your marks in english\n");
    scanf("%d",&english);
    printf("Enter your marks in math\n");
    scanf("%d",&math);
    printf("Enter your marks in urdu\n");
    scanf("%d",&urdu);

    if (english<33||urdu<33||math<33)
    {
       printf("You are fail due to less marks in individual subject");
    }
    else if ((english+math+urdu)/3>=40)
    {
        printf("You are pass");
    }
    
    else
    {
        printf("You are fail");
    }
    
    
    
    return 0;
}
