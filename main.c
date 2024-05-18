#include <stdio.h>
#include "lr.h"

int main(void)
{
    int choice = 0;
    while (choice < 1 || choice>66)
    {
        printf("1) The first laboratory work 1\n");
        printf("2) The second laboratory work 2\n");
        printf("25) The first laboratory work 1\n");
        printf("3) The third laboratory work 3\n");
        printf("4) The fourth laboratory work 4\n");
        printf("45) The first laboratory work 1\n");
        printf("5) The fifth laboratory work 5\n");
        printf("55) The first laboratory work 1\n");
        printf("6) The sixth laboratory work 5\n");
        printf("66) The sixth laboratory work 5\n");
        printf("7) The seventh laboratory work 5\n");
        scanf("%d\n", &choice);
    }

    if (choice == 1)
        first();
    else if (choice == 2)
        second();
    else if (choice == 25)
        dop2();
    else if (choice == 3)
        third();
    else if (choice == 4)
        fourth(); 
    else if (choice == 45)
        dop4();
    else if (choice == 5)
       fifth();   
    else if (choice == 55)
        dop5(); 
    else if (choice == 6)
        sixth();
    else if (choice == 66)
        dop6(); 
    else if (choice == 7)
        seventh();
return 0;
}