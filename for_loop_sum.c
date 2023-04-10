#include<stdio.h>
int main()
{
    int i,sum=0;//print sum value from 5 to 50 =1265
    
    for(i=5;i<=50;i++)
    {
      sum=sum+i; 
    }
     printf("the value of sum is %d\n",sum);
    return 0;
}