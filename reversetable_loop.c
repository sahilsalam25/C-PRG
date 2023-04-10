#include<stdio.h>
int main()
{
    int i,n,table=1;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=10;i>=1;i--)
    {
        table=n*i;
        printf("table of given no is %d\n",table);
        
    }
    
    
}