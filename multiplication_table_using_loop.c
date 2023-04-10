#include<stdio.h>
int main(){
    printf("multiplication table of 10 is :\n");
    // int n;
    // printf("enter the value of n:\n");
    // scanf("%d",&n);
    for(int i=10;i>=1;i--){
       // printf("table of n is : %d\n",n*i); // forward order table
       // printf("table of n in reverse order is : %d\n",n*i); // reverse order table
       printf(" 10 x %d = %d\n",i,10*i);
    }
    return 0;
}