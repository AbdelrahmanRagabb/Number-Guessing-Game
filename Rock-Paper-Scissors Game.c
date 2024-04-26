#include <stdio.h>
#include <stdlib.h>
int main()
{
    int y,i=10,rem,CSCORE=0,USCORE=0;      //C for COMPUTER & U for USER
    char x,c;
    printf("Welcome to Rock-Paper-Scissors Game\n\n");
    while (1)
    {
        printf("Enter your choice <R-P-S> ROCK-PAPER-SCISSORS\n");
        fflush(stdin);
        scanf("%c",&c);
        if (((((c==80|c==82)|c==83)|c==112)|c==114)|c==115)
        {
            rem=i%4;
            i=(((7+i)*3)/2)-(i/5);
            if (rem==1)
            {
                x=82;
                y=114;       //rock
            }
            else if (rem==2)
            {
                x=80;
                y=112;       //paper
            }
            else if (rem==3)
            {
                x=83;
                y=115;       //scissors
            }

            if (x==c | y==c)
            {
                printf("WE CHOOSED THE SAME\nDRAW\n");
                printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
            }
            else
            {
                if (x==82 | y==114)       //rock
                {
                    if (c==80|c==112)       //paper
                    {
                        printf("I CHOOSED THE ROCK\n");
                        printf("YOU CHOOSED THE PAPER\n");
                        printf("CONGRATULATION YOU WIn\n");
                        USCORE=USCORE+1;
                        printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
                    }
                    else if (c==83|c==115)       //scissors
                    {
                        printf("I CHOOSED THE ROCK\n");
                        printf("YOU CHOOSED THE SCISSORS\n");
                        printf("YOU LOSE. TRY AGAIN\n");
                        CSCORE=CSCORE+1;
                        printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
                    }
                }
                else if (x==80 | y==112)       //paper
                {
                    if (c==82|c==114)       //rock
                    {
                        printf("I CHOOSED THE PAPER\n");
                        printf("YOU CHOOSED THE ROCK\n");
                        printf("YOU LOSE. TRY AGAIN\n");
                        CSCORE=CSCORE+1;
                        printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
                    }
                    else if (c==83|c==115)       //scissors
                    {
                        printf("I CHOOSED THE PAPER\n");
                        printf("YOU CHOOSED THE SCISSORS\n");
                        printf("CONGRATULATION YOU WIN\n");
                        USCORE=USCORE+1;
                        printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
                    }
                }
                else if (x==83 | y==115)       //scissors
                {
                    if (c==82|c==114)       //rock
                    {
                        printf("I CHOOSED THE SCISSORS\n");
                        printf("YOU CHOOSED THE ROCK\n");
                        printf("CONGRATULATION YOU WIN\n");
                        USCORE=USCORE+1;
                        printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
                    }
                    else if (c==80|c==112)       //paper
                    {
                        printf("I CHOOSED THE SCISSORS\n");
                        printf("YOU CHOOSED THE PAPER\n");
                        printf("YOU LOSE. TRY AGAIN\n");
                        CSCORE=CSCORE+1;
                        printf("COMPUTER= %d & YOU= %d\n\n",CSCORE,USCORE);
                    }
                }
            }
        }
        else
        {
            printf("PLEASE CHOOSE FROM <R-P-S>\n");
        }
    }

    return(0);
}
