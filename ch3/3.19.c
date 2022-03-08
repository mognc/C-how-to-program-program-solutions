#include<stdio.h>
int main()
{
    float sales, salary, comission;
    printf("Enter sales in dollar (-1 to end): ");
    scanf("%f", &sales);
    while (sales!=-1)
    {
        comission = 0.09*sales;
        salary = 200 + comission;
        printf("The salary is %f\n", salary);
        printf("Enter sales in dollar (-1 to end): ");
        scanf("%f", sales);

    }

}
