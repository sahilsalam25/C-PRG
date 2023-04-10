// function Tpye_1 = No_Argument_with_No_Return_Value :
// EXample_no:1 = SIMPLE_CALCLATOR :
 /*  #include <stdio.h>
void simpleCalculator();

void main()
{
    simpleCalculator();
    
}
void simpleCalculator()
{
    int a, b, sum, sub, mul, div;
    printf("Enter the value of a :\n");
    scanf("%d", &a);
    printf("Enter the value of b :\n");
    scanf("%d", &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("The sum of given number is : %d\n", sum);
    // sub=a-b;
    printf("The subtraction of given number is : %d\n", sub);
    // mul=a*b;
    printf("The Multiplication of given number is : %d\n", mul);
    // div=a/b;
    printf("The Divisionof given number is : %d\n", div);
}  */

 // Example_no :2 = Print_character :
 #include<stdio.h>
 void printChar();
 void main(){
    printChar();
 }
 void printChar(){
    char _ch;
    printf("Enter any character:\n");
    scanf("%c",&_ch);
    printf("the given Character is : %c\n",_ch);
 }