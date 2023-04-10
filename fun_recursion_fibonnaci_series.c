// fibonacci no= 0,1,1,2,3,5,8,13,21....
//  formula <fib(n)=fib(n-1)+fib(n-2)>
// fib(2)=fib(0)+fib(1)
// fib(3)=fib(1)+fib(2);
/*   #include <stdio.h>
int fib(int);
int main()
{
    int number, Result;
    printf("enter the number : \n");
    scanf("%d", &number);
    Result = fib(number);
    printf("The fibonacci series of %d is %d\n", number, Result);

    return 0;
}
int fib(int n)
{
    int res;
    if (n == 0)
    {
        return 0;
    }
    if(n==1){
        return 1;
    }
    else
    {
        res=fib(n-1)+fib(n-2);
        return res;
    }
}   */

// using_recursion_print_fibonacci_series_google_answer :
#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main(){ 
	int n, i; 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d\t",fibonacci(i));
	}
	getch();
}
 
int fibonacci(int i){ 
	if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 