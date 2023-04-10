#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks\n");
    scanf("%d",&marks);

    /*if(marks>=30)
    {
        printf("pass :");
    }
        else
        {
            printf("fail :");
        }*/
        //by using ternary operator
       // marks>=30 ? printf("pass\n"): printf("fail\n");
       if(marks<30)
       {
        printf("grade :C\n");

       }
       else if(marks>=30 && marks<70)
       {
        printf("grade :B\n");
    
       }
       else if(marks>=70 && marks<90)
       {
        printf("grade : A\n");
       }
       else if(marks>=90 &&marks<=100)
       {
        printf("grade :A+\n");
       }
        return 0;
    }
