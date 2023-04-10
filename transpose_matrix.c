// Write a program to print Transpose_of_a_Matrix :
#include <stdio.h>
int main()
{
    int i, j, a[3][4];
    printf("enter the matrix elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix element is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the Matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}