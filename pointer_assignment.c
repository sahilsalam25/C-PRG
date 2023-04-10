#include <stdio.h>
int main()
{
    int a = 10, b = 5;
    int *p, *q; // *p means value of variable *p=10 :
    p = &a; // in p address of a is stored
    q=&b;
   // q=p;
    *q =*p; // *P =10, is assigned to *q but *q =5 as q=&b=5 but now  *q=*p =10 is assigned to *q :
    printf("Value of 'a' = %d\t %d\t %d\t", a, *p, *q);

    return 0;
}