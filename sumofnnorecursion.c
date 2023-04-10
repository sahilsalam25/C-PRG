// n=1+2+3+4.....(n-1)+n= sum(n-1)+n;// sum o first n  no
// n=5=1+2+3+4+5=sum(4)+5;
// in recursion base case is very important to execute
// sum(n)=sum(n-1)+n; ...  formula of sum of n number 
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("sum is :%d", sum(6));
    return 0;
}
// Recursive function
int sum(int n){
    if(n==1){
    return 1;
    }
    int sumNm1=sum(n-1); // sum of 1 to (n-1);
    int sumN=sumNm1+n;
    return sumN;
}
