#include <stdio.h>
void printS(int count);
int main()
{
    printS(10);//10 times count so output 10 times sahil salam
    return 0;
}
// Recursive function
void printS(int count)
{

    {
        if (count == 0)
            return;
    }
    printf("SAHIL SALAM :\n");
    printS(count - 1);
}