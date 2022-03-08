#include <stdio.h>
int main()
{
    float balance, account_number, beginning_balance, total_credits, total_charges, credit_limit;
    printf("Enter account number (-1 to end): ");
    scanf("%f", &account_number);
    while(account_number!=-1)
    {
        printf("Enter beginning balance: ");
        scanf("%f", &beginning_balance);
        printf("Enter total charges: ");
        scanf("%f", &total_charges);
        printf("Enter total credits:");
        scanf("%f", &total_credits);
        printf("Enter credit limits: ");
        scanf("%f", &credit_limit);
        balance = beginning_balance + total_charges - total_credits;
        if (balance > credit_limit)
        {
            printf("Account: %f\n", account_number);
            printf("Credit limit: %f\n", credit_limit);
            printf("Balance: %f\n", balance);
            printf("Credit limit exceeded\n\n");

        }
        printf("Enter account number (-1 to end): ");
        scanf("%f", account_number);
    }
}
