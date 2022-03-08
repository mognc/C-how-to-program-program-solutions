#include<stdio.h>  /* Ali Farooq  Fa21-bce-005 */
int main()
{
    float loan_principal, interest_rate, loan_days, interest;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &loan_principal);

    while(loan_principal != -1)
    {
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);

        printf("Enter the term of loan in days: ");
        scanf("%f", &loan_days);

        interest = loan_principal * interest_rate * loan_days /365;

        printf("The interest charge is: $%.2f\n\n", interest);
        printf("Enter loan principal (-1 to end):");
        scanf("%f", &loan_principal);

    }
    return 0;
}
