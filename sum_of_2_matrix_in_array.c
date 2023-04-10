// Write a program to print Addition of TWO_[MATRIX] and print the final_[MATRIX] :

#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[5][5], b[5][5], c[5][5];
    printf("Enter first Matrix ELements :\n");
    for (i = 0; i < 3; i++) // for row value a[i]
    {
        for (j = 0; j < 2; j++) // for coloumn value a[j]
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second Matrix Elements :\n");
    for (i = 0; i < 3; i++) // for row value a[i]
    {
        for (j = 0; j < 2; j++) // for coloumn value a[j]
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nfirst Matrix Elements are :\n");
    for (i = 0; i < 3; i++) // for printing row values a[i] is used :
    {
        for (j = 0; j < 2; j++) // for printing the coloumn values a[j] is used :
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix Elements are :\n");

    for (i = 0; i < 3; i++) // for printing row values a[i] is used :
    {
        for (j = 0; j < 2; j++) // for printing the coloumn values a[j] is used :
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\nfinal Matrix after addition is :\n");
    for (i = 0; i < 3; i++) // for printing row values a[i] is used :
    {
        for (j = 0; j < 2; j++) // for printing the coloumn values a[j] is used :
        {
            sum = sum + a[i][j] + b[i][j];
            c[i][j] = a[i][j] + b[i][j]; // final matrix after the addition of first and second matrix :

            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    printf("The sum of final Matrix  are = %d\n", sum);

    return 0;
}
