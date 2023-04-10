#include <stdio.h>
int main()
{
    int n, i=1;
    int factorial = 1;
    printf("enter the value of n : ");
    scanf("%d", &n);
    // for(int i=1;i<=n;i++){
    //     factorial= factorial * i;
    // }
    // printf("the factorial of given no  %d is : %d\n",n,factorial);
    
     // --> using while loop
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("the factorial of given no  %d is : %d\n", n, factorial);

    return 0;
}
