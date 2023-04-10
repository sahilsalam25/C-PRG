// function_type_4 = With_argument_with_return_type :
 // Example_no_1 = Sum of two numbers:
#include <stdio.h>
int printSum(int, int);
int main()
{
    int x, y, store_sum;
    printf("Enter the value of a : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
   // printSum(x,y); // case_1 : we can take input from the user by using x & y :
    store_sum = printSum(x, y);
    printf("The value of sum is = %d\n",store_sum);
    //printSum(25,10); // case_2 : we can pass direct 25,10 value in printSum function or take input from user :

    return 0;
}
int printSum(int a, int b)
{
    int sum = a + b;
  // printf("The value of sum is = %d\n",sum);
    return sum;
}   

