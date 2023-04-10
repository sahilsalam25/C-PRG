#include <stdio.h>
void printHello();
void printGoodbye();
int main()
{
    
    printGoodbye(); // function call mein jo pehle aaayega wo pehle execute hoga
    printHello();
     printGoodbye();
    return 0;
}
void printHello()
{
    printf("Hello :\n");
    printf("WORLD\n");
}
void printGoodbye()
{
    printf("Goodbye :\n");
    printf("FRIENDS\n");
}