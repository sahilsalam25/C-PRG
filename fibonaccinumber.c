//fibonacci no= 0,1,1,2,3,5,8,13,21....
// formula... fib(n)=fib(n-1)+fib(n-2);
//fib(2)=fib(0)+fib(1)...fib(3)=fib(1)+fib(2);
/*  #include<stdio.h>
int fib(int n);
int main(){
    for(int i=1;i<=7;i++){
    printf("fib of given number is : %d\n",fib(7));
}
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibNm1=fib(n-1);
    int fibNm2=fib(n-2);
    int fibN= fibNm1 + fibNm2;
   //printf("fib of %d is : %d\n",n,fibN);
    return fibN;
}  */
 
 #include <stdio.h>

// fibonacci() funtion definition
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; // retuning 0, if condition mets
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; // returning 1, if condition mets
    }
    // else calling the fibonacci() function recursively, till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
    int num; // variable to store how many elements to be displayed in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); // taking user input

    for (int i = 0; i < num; i++)
    {
        printf("%d\t ",fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }

    return 0;
}
