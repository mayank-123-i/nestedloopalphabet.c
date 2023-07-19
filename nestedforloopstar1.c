#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j, x;

    printf("Enter No : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {

        for (j = i; j <=a+1; j++)

        {

            printf(" ");

        }

        for (x = 1; x <= i; x++)
        {

            printf("*");

        }

        printf("\n");

    }

    return 0;
}