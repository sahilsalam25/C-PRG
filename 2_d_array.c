// Write a program to print 2D_Array [MATRIX] and calculate the sum :

#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[5][5];
    printf("Enter Matrix ELements :\n");
    for (i = 0; i < 3; i++) // for row value a[i]
    {
        for (j = 0; j < 2; j++) // for coloumn value a[j]
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix Elements are :\n");
    for (i = 0; i < 3; i++) // for printing row values a[i] is used :
    {
        for (j = 0; j < 2; j++) // for printing the coloumn values a[j] is used :
        {
            printf("%d\t", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
        
        
    }
   printf("The Total_sum of Matrix Elements are = %d\n", sum);

    return 0;
}

