#include <stdio.h>
int main()
{
    int counter, number, largest;
    counter = 0;
    largest = 0;
    while(counter<=10)
    {
        printf("Enter any number: ");
        scanf("%d", &number);
        counter = counter +1;
        if (number > largest)
        {
            largest = number;
        }
    }
    printf("The largest is: %d", largest);
}
