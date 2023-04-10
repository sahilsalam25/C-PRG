// write a program to read marks of 5 elements : and calculate the sum & avg using array :
#include <stdio.h>
int main()
{
    int marks[5];
    int sum = 0;
    float avg;
    printf("Enter 5 Array Elements : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
        
    }
    avg = sum / 5;
    printf("The value of sum is = %d\n ", sum);
    printf("The value of avg is = %f\n ", avg);

    return 0;
}