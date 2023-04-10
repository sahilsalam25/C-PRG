#include <stdio.h>
#include <string.h>
int main()
{
    int a = 10, b = 15,c;
    int *p, *q;
    p = &a, q = &b;
    // p=(&a,&b); // for checking address of a is stored first then address of b is stored and print address of b :
    c=*p;
    printf("The value of a is = %d\n", a);
    printf("The value of a using '*' pointer is = %d\n", *p);
    printf("The value of b is = %d\n", b);
    printf("The value of b using '*' pointer is = %d\n", *q);
    printf("The address of a is = %u\n", &a);
    printf("The address of a using  pointer is = %u\n", p); // %u is use to print integer format address :
    printf("The address of b is = %u\n", &b);
    printf("The address of b using  pointer is = %x\n", q); // %x is use to print address in hexadecimal format :
    printf("The value of c is = %d\n", *p);

    return 0;
}