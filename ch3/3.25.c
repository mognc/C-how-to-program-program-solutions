#include <stdio.h>
int main()
{

    int n, num;
    n=1;
    num=1;
    printf("N\t10*N\t100*N\t1000*N\n\n");
    while (num<=10)
    {
        printf("%d\t%d\t%d\t%d\n", num, num*10, num*100, num*1000);

        num= num+1;

    }
}
