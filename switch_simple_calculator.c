#include <stdio.h>
int main()
{
    int a, b;
    int sum, sub, mul, div, mod;
    int _Choice;
    printf("Enter the Value of a : \n");
    scanf("%d", &a);
    printf("Enter the Value of b : \n");
    scanf("%d", &b);
    printf("Enter Your Choice :\n");
    scanf("%d",&_Choice);
    switch (_Choice)
    {
    case 1:
        sum = a + b;
        printf("The sum of given number is : %d\n", sum);
        break;
    case 2:
        sub = a - b;
        printf("The sub of given number  is : %d\n", sub);
        break;
    case 3:
        mul = a * b;
        printf("The multiplication of given number is : %d\n", mul);
        break;
    case 4:
        div = a / b;
        printf("The division of given number is : %d\n", div);
        break;
    case 5:
        mod = a % b;
        printf("The Modulus of given number  is : %d\n", mod);
        break;
    default:
        printf("INVALID CHOICE :");
    }

    return 0;
}