#include <stdio.h>
#include <stdlib.h>

int main() {
    int Dnum, Bnum, Onum, Hnum, i, rem;
    printf("Welcome to Number System Converter Application\n");

    while (1) {
        printf("Enter the Number in Decimal: ");
        scanf("%d", &Dnum);
        Bnum = Onum = Hnum = Dnum;
        printf("Binary Equivalent: ");
        if (Bnum == 0) {
            printf("0");
        } else {
            int binary[32];
            int index = 0;
            while (Bnum > 0) {
                rem = Bnum % 2;
                binary[index] = rem;
                Bnum = Bnum / 2;
                index++;
            }
            for (i = index - 1; i >= 0; i--) {
                printf("%d", binary[i]);
            }
        }
        printf("\nOctal Equivalent: ");
        if (Onum == 0) {
            printf("0");
        } else {
            int octal[32];
            int index = 0;
            while (Onum > 0) {
                rem = Onum % 8;
                octal[index] = rem;
                Onum = Onum / 8;
                index++;
            }
            for (i = index - 1; i >= 0; i--) {
                printf("%d", octal[i]);
            }
        }
        printf("\nHexadecimal Equivalent: ");
        if (Hnum == 0) {
            printf("0");
        } else {
            char hexadecimal[32];
            int index = 0;
            while (Hnum > 0) {
                rem = Hnum % 16;
                if (rem < 10) {
                    hexadecimal[index] = rem + '0';
                } else {
                    hexadecimal[index] = rem + 55;
                }
                Hnum = Hnum / 16;
                index++;
            }
            for (i = index - 1; i >= 0; i--) {
                printf("%c", hexadecimal[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
