// Write a program to print Multiplication of TWO_[MATRIX] and print the final_[MATRIX] :

#include <stdio.h>
#define N 50
int main()
{

    int a[N][N], b[N][N], c[N][N], sum;
    int i, j, k;
    int m, n, p, q;
    printf("Enter Rows and Coloumn for first Matrix :\n");
    scanf("%d %d", &m, &n);
    printf("Enter first Matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Row and Coloumn for second Matrix :\n");
    scanf("%d %d", &p, &q);
    printf("\nEnter Second Matrix :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nfirst Matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond Matrix is:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    if (n != p)
    {
        printf("Matrix cannot Multiply because Rows and Coloumn are Different\n");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }
    }
    printf("\nMatrix Multiplication is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
