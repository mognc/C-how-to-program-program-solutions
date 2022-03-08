#include<stdio.h>
int main()
{

    int counter, total, grade;
    float average;
    total = 0;
    counter = 0;
    printf("Enter grade (-1 to end): ");
    scanf("%d", &grade);
    while(grade !=  -1)
    {
        total = total+grade;
        counter = counter +1;
        printf("Enter grade (-1 to end) : ");
        scanf("%d", &grade);

    }
    average = total/counter;
    printf("The average is: %f", average);

}
