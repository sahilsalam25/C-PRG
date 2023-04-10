// Function_Type_2 = No_Argument_with_return_value :
/*
#include <stdio.h>
int sum(); // function decleration :
int main()
{

    int s;
    s = sum(); // function call :
    printf("The value of sum is = %d\n", s);
    return 0;
}
int sum()
{ // function decleration :
    int a, b, sum;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    // sum=a+b;   // return sum or return a+b (both gives same result) :
    // return sum;
    return a + b;
}  */ 
 
// Exmaple_NO =2 : Print_char
#include<stdio.h>
char printChar();
int main(){

    char ch;
    ch=printChar();
    printf("Character is = %c\n",ch);
    return 0;
}
char printChar(){
 return 'S','1','2','N';  // Here commas means return last value of comma before commas value its discarded the value :  
 // here it return N in main function ... usse pehle ke value ko discard kar dega (S ,1 ,2 ko discard krke N print karega)
}
