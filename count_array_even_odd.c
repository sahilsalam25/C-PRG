// write a program to read an array of 10 integer and count total no of even & odd elements :
#include <stdio.h>
int main()
{   
   
    int a[20], i;
    int even = 0, odd = 0;
    int num;
    printf("Enter the number to calculate even or odd numbers : ");
    scanf("%d",&num);
    printf(" Now Enter Numbers : ");
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (a[i] % 2 == 0)
            even = even+1;

        else
            odd = odd+1;
    }
    printf("The Total even numbers are : %d\n", even);
    printf("The Total Odd Numbers are : %d\n", odd);

    return 0;
}