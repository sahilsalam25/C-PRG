#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, -10, -15, -5, 20};
    int *p = &a[1];
    printf("The Value is = %d\n", *p);
    printf("Address of Element is = %u\n", p);
    p = p + 1;
    printf("The Value is = %d\n", *p);
    printf("Address of Element is = %u\n", p);
    p = p + 2;
    printf("The Value is = %d\n", *p);
    printf("Address of Element is = %u\n", p); 
    p = p + 3;
    printf("The Value is = %d\n", *p);
    printf("Address of Element is = %u\n", p); 

    return 0;
}