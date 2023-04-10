// function_type_3 = With_Argument_N0_Return_Value :
// Example 1 : printSum() =
/*
#include<stdio.h>
void printSum(float , float);
void main(){
    float a,b;
   // a=5.5,b=54.5; // We can directly assigned the a & b value that value will be print on printSum function or take input from user also :
    printf("Enter the value of a : ");
    scanf("%f",&a);
    printf("Enter the value of b : "); // case _1 = we can take input from the user also
    scanf("%f",&b);
    printSum(a,b); // Here a & b are the Arguments of functions(Actual_Parameter):
     printSum(10,5); // case_2 = or  we can pass direct value in the printSum function :

}
void printSum(float x, float y){  // Here x & y are the parameters of function(formal_parameter) :
    float sum;
    sum=x+y;
    printf("The sum of two number  is = %.3f\n",sum); // Case_1(if we define a variable sum then assign sum = a+b)
 // printf("The sum of two number  is = %.3f\n",x + y); // case_2 (we can directly print x + y :< No need to define a extra variable sum >)
}   */

    // Example_no_2= printEvenOddunction :
#include <stdio.h>
int n; // Global_Variable (Used overall in program in any fucntion) :
void printEvenOdd(int);
void main()
{
    // int n; // Lcal_Variable (Only used in main function only not used in other function like ex printEvenOdd it gives error)
    printf("enter the value of n = ");
    scanf("%d", &n);
    printEvenOdd(n);
    printEvenOdd(n);
    printEvenOdd(n);
}
void printEvenOdd(int a)
{
    if (n % 2 == 0)
    {
        printf("The Given Number %d is Even Number :\n", n);
    }
    else
    {
        printf("The Given Number %d is Odd Number :\n", n);
    }
}    