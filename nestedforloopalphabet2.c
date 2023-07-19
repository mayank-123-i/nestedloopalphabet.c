#include <stdio.h>
#include <conio.h>

int main()
{
    char a, i, j;

    printf("Enter character : ");
    scanf("%c", &a);

    for (i = a; i >= 'A'; i--)

    {

        for (j = i; j >= 'A'; j--)

        {

            printf("%c ", i);
        }

        printf("\n");
    }

    return 0;
}