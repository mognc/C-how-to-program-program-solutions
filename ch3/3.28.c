#include<stdio.h>
int main()
{

    int pass, fail, student, result;
    pass=0;
    fail=0;
    student=1;
    while(student<=10)
    {
        printf("Enter result (1=pass, 2=fail): ");
        scanf("%d", &result);
        if(result!=1 && result!=2)
        {
            student= student-1;
        }
        if(result==1)
        {
            pass = pass+1;
        }
        if(result==2)
        {
            fail = fail+1;
        }
        student = student+1;
    }
    printf("Passed = %d\n", pass);
    printf("Failed = %d", fail);

}
