/*  Example No 1 :
#include <stdio.h>
int main()
{
    int a = (5.5);
    int b = 10;
    float c = 10;
    printf("the value of a is %d\n", a);
    printf("the value of b is %f\n", (float)b);
    printf("the value of c is %d\n", (int)c); // if you want to typecast your datatype then do in printf function before variable:
    return 0;
}   */


// Example no 2 :
/*
 #include <stdio.h>
// Typecasting Syntax
// (type) value;
int main()
{

	int a = 3;
	float n= (float)54/5;
    printf("The Value of a is %f\n", (float)a);
	printf("The Value of n is %f\n", n);
	return 0;

}
*/


// Example NO 3 :

#include<stdio.h> 
int main() 
{ 
	int a; 
	float b; 
	char c; 
	printf("Enter the value of a :\n"); 
	scanf("%d",&a); 
	printf("A is %d\n", a); 
	printf("Enter the value of b :\n"); 
	scanf("%f",&b ); 
	printf("B is %d\n", (int) b); 
	printf("Type any character : \n"); 
	scanf(" %c",&c ); 
	printf("Character is %d",(int) c); 
	return 0; 
} 

