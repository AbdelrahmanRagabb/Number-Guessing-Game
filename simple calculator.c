#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Welcome in simple calculator\n");
    char op;
    signed long long n1,n2,sum,rem;
    while(1)
    {
        printf("Please, Enter desired opearation\n");
        printf("Firstly\na:Addition\ns:Subtraction\nm:Multiplication\nd:Division\n");
        printf("Secondly your operands\n");
        fflush(stdin);
        scanf("%c%lld%lld",&op,&n1,&n2);

        if (op==97)
        {
            sum=n1+n2;
            printf("SUM= %lld\n",sum);
        }
        else if (op==115)
        {
            sum=n1-n2;
            printf("SUM= %lld\n",sum);
        }
        else if (op==109)
        {
            sum=n1*n2;
            printf("SUM= %lld\n",sum);
        }
        else if (op==100)
        {
            if (n2==0)
            {
                printf("Math ERROR\n");
            }
            else
            {
            sum=n1/n2;
            rem=n1%n2;
            printf("SUM= %lld\n",sum);
            printf("Reminder= %lld\n",rem);
            }
        }
        else
        {
            printf("Please,Enter correct operation\n");
        }
    }
    return(0);
}
