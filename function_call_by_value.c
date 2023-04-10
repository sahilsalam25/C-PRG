#include <stdio.h>
int  funValuepass(int x, int y);
int main()
{
    int x = 10, y = 25;
    funValuepass(x,y); // call by value :
    printf("The Value of x & y After calling function is X = %d Y = %d\n", x, y);

    return 0;
}
int funValuepass(int x, int y)
{
     x = 25;
     y = 10;
    printf(" X = %d  & Y = %d\n", x, y);
}