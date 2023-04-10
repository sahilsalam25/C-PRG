#include <stdio.h>
int main()
{
    float radius;
    float area;
    printf("enter the value of radius :\n");
    scanf("%f", &radius);
    area = (3.14 * radius * radius); // formula for finding a radius.....
    printf("the area of circle is : %f\n", area);

    return 0;
}