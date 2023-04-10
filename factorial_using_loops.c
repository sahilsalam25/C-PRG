#include <stdio.h>
#include<conio.h>
int main()
{
    int n, fact = 1;
    printf("Enter the value of n : \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of given number %d is : %d\n", n,fact);

    return 0;
    getch();
}