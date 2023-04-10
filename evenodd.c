#include<stdio.h>
int main()
{
    int x;
    printf("enter the value of x :");
    scanf("%d",&x);
    printf("%d",(x%2)==0);//even value output -1..... odd value output-0;
    return 0;
}