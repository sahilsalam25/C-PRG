// #include <stdio.h>
// int main()
// {

//     int sum = 0, i = 0;
//     int n;
//     printf("Enter the value of n :\n");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         sum = sum + i;

//         i++;
//     }
//     printf("The sum of first %d Natural no is : %d\n", n, sum);

//     return 0;
// }
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