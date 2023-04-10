/*#include<stdio.h>
int main()
{
    int age;
    printf("enter age :");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("eligible for vote\n");
        printf("eligible for drive");
    }
    else{
        printf("not eligible for vote");
    }
    return 0;
}*/
//same case by using ternary operator

#include<stdio.h>
int main()
{
    int age;
    printf("enter age : ");
    scanf("%d",&age);
    age >=18 ? printf("eligible for vote\n"):printf("not eligible for vote\n");
    return 0;
}