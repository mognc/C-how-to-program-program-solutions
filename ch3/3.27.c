#include<stdio.h>
int main()
{
    int counter, number, largest, largest2;
    counter = 0;
    largest = 0;
    largest2 = 0;
    while(counter<=9)
    {
        printf("Enter any number: ");
        scanf("%d", &number);
        counter = counter +1;
        if (number > largest)
        {
            largest2 = largest;
            largest = number;

        }
    }
    printf("The largest is: %d\n", largest);
    printf("The second largest is %d", largest2);
}
