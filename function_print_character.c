#include <stdio.h>
char printChar();
int main()
{
    char s;
    // s=printChar();
    s = printChar();
    printf("The Entered Character is = %c\n", s);
    return 0;
}
char printChar()
{
    char c;
    printf("Enter any Character :\n");
    scanf("%c", &c);
    return c;
}