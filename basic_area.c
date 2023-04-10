#include <stdio.h>
#include<conio.h>
int main()
{
    int length, breadth, area;
    printf("Enter the value of length :\n");
    scanf("%d", &length);
    printf("enter the value of breadth :\n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of Rectangle is : %d \n", area);

    return 0;
    getch();
    
}