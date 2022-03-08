#include <stdio.h>
int main()
{

    int hours_worked,salary, extra_time;
    float hourly_rate;
    salary = 10;
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours_worked);
    while(hours_worked != -1)
    {
        printf("Enter hourly rate of the worker (00.00$): ");
        scanf("%f", &hourly_rate);
        salary = hours_worked*hourly_rate;
        if(hours_worked > 40)
        {
            extra_time = hours_worked - 40;
            extra_time = .5*extra_time*hourly_rate;
            salary = salary + extra_time;
            printf("Salary is $%d\n", salary);
        }
        else{
            printf("Salary is $ %d\n", salary);
        }
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours_worked);
    }
}
