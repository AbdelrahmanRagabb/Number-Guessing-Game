#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    int i,y,z;
    int m,flag,x1,xk;
    printf("Welcome in Palindrome Checker\n");
    while (1)
    {
        z=1;
        flag=1;
        printf("Enter Your Number\n");
        scanf("%d",&num);
        y=num;
        for(i=0; y!=0; i=i+1)
        {
            y=y/10;
            z=z*10;
        }
        z=z/10;

        for(m=i/2; (m>0 && flag==1) && num>0 ; m=m-1)
        {
            x1=num%10;
            xk=num/z;
            num=(num-(xk*z))/10;
            z=z/100;
            printf("%d  %d\n",x1,xk);
            if (x1==xk)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        if (flag==1 && num<10)
        {
            printf("The number is Palindrome\n");
        }
        else
        {
            printf("The number is NOT Palindrome\n");
        }

    }
    return(0);
}
