// Write a program to print 2_D MATRIX and print their indivisual sum of row_and_Coloumn Elements :

#include <stdio.h>
int main()
{
    int i, j;
    int a[4][3], sumRow, sumColoumn;
    printf("Enter  array element : \n");
    for (i = 0; i < 3; i++) // for row value a[i]
    {
        for (j = 0; j < 3; j++){ // for coloumn value a[j]

            scanf("%d", &a[i][j]);
            }
        }

    printf("\nThe array elements are :\n");
    for (i = 0; i < 3; i++) // for printing row values a[i] is used :
    {

        for (j = 0; j < 3; j++)  // for printing the coloumn values a[j] is used :
        {
            printf("%d\t ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        sumRow =0; sumColoumn = 0;
        for (j = 0; j < 3; j++)
        {
            sumRow = (sumRow + a[i][j]);
            sumColoumn = (sumColoumn + a[j][i]);
        }

        printf("Sum of Row element is = %d\n", sumRow);
        printf("Sum of Coloumn element is = %d\n", sumColoumn);
    }


   return 0;
}   
