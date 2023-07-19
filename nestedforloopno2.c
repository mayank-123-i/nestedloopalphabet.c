#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, j;

    printf("Enter No : ");
    scanf("%d", &a);

    for (i = a; i >= 1; i--)
    {

        for (j = i; j >= 1; j--)

        {

            printf("%d  ", i + i, i + i);
        }

        printf("\n");
    }

    return 0;
}