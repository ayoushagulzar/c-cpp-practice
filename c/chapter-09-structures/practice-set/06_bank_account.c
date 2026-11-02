// Practice 9.6: Bank account
// Question: Create a structure for a bank account and fill it from user input.

#include <stdio.h>

struct bank_acc
{
    int accNo;
    char name[30];
    float balance;
};
int main()
{
    struct bank_acc account;
    printf("Enter the account holder's name: ");
    scanf("%29s", account.name);
    printf("Enter the account number: ");
    scanf("%d", &account.accNo);
    printf("Enter the account balance: ");
    scanf("%f", &account.balance);

    printf("Name is %s\n", account.name);
    printf("AccNo is %d\n", account.accNo);
    printf("Balance is %.2f\n", account.balance);

    return 0;
}
