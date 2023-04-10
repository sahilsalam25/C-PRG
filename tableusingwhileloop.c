#include <stdio.h>
int main()
{
    int n;
    int i = 10;
    printf("enter the value of n :\n");
    scanf("%d", &n);
    while (i >=1)
    {
        printf("table of given no in reverse order is : %d\n", n * i);
        i--;
    }
    return 0;
}