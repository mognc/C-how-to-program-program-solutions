#include<stdio.h>
int main()
{
int A;
A=3;
printf("A\tA+2\tA+4\tA+6\n");
while(A!=18)
{
    printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);
    A= A+3;
}
}
