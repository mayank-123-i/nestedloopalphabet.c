#include <stdio.h>
#include <conio.h>

int main()
{
   int a,i,j,k;

   printf("Enter No : ");
   scanf("%d" , &a);

   for (i = a; i >=1; i--)
   {
    for (j = a;  j>=i; j--)
    {
        printf(" ");
    }

    for (k = i; k >=1; k--)
    {
        printf("*");
    }
    
    printf("\n");
    
   }

   for (i = 2; i <=a; i++)
   {

    for (j = i; j <=a; j++)
    {
        printf(" ");
    }

    for (k = 1; k <=i; k++)
    {
        printf("*");
    }
    
    
    printf("\n");
   }
   
   
    return 0;
}