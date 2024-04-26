#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x=0,y,i=0;
    printf("Welcome in Number Guessing Game\n");
    printf("Try to guess the desired number from 1 to 100\n");
    while (1)
    {
    x=33+((7*i)/4);
    while (x>100)
    {
        x=x-54;
    }
    for(i=0;y!=x;i=i+1)
    {
        printf("Enter your Guessing Number\n");
        scanf("%d",&y);
        if(y>x)
        {
            printf("your Guessing Number is more than desired number\n");
        }
        else if (y<x)
        {
            printf("your Guessing Number is less than desired number\n");
        }
        else
        {
            printf("CONGRATULATIONS.YOU GET THE NUMBER CORRECTLY\n");
        }
    }

    printf("Number of Trials is %d\n",i);
    }
    return(0);
}
