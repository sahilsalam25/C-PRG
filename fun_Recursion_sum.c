

// function_recursion_print_sum_of_n_natural_number :
#include <stdio.h>
int x;
int printSum(int);
int main()
{
    int Result;
    Result = printSum(x); // we are paasing 5 in printSum function ie it will print sum of 5 first 5 natural number ...we can  pass any number in printSum function...  for ex we want to print 10 , 11 ,12 etc just write in printSum function which number you want to print :
    printf("The value of sum is = %d\n", Result);

    return 0;
}
int printSum(int x)
{
    printf("Enter the number : "); // take  n number from the user :
    scanf("%d",&x);
    int sum = 0;
   // int substraction=0;
    if (x == 0)
    {
        return x;
    }
    sum = x + printSum(x - 1);
    // substraction = x - printSum(x - 1); // to_print_difference_of_n_natural_number :
    //return substraction;
    return sum;
}  

/*   // function_recursion_print_multiplication_of_first_n_natural_number :
#include <stdio.h>
int printMul(int);
int main()
{
    int Result,number;
    printf("Enter any number : ");
    scanf("%d",&number);
    Result = printMul(number);
    printf("the value of multiplication is = %d\n", Result);
    return 0;
}
int printMul(int a)
{
    int mul = 1;
    if (a == 1)
    {
        return a;
    }
    else{
    mul = a * printMul(a - 1);
    }
    return mul;
}   */
