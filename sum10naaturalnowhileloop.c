#include <stdio.h>
int main()
{
    int i = 1;
    int n;
    printf("enter the value of n :\n");
    scanf("%d",&n);
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        // printf("sum of first 10 natural no is : %d\n",sum); // for print line to line sum value
        i++;
    }
    printf("sum of first n natural no is : %d\n", sum); // for print final 10 sum value
    return 0;
}