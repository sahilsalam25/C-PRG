 
 // Program to print sum of n number : until user input the while condition
 #include <stdio.h>
int main()
{
    int n, sum = 0;
    do
    {
        printf("Enter a Number :\n");
        scanf("%i", &n);
        sum += n;
    } while (n != 0);
    printf("Sum of the entered  number is = %d",sum);

    return 0;
}