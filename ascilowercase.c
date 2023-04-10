#include <stdio.h>
int main()
{
    char ch;
    // ASCII Value num 97 to 122 ( a-z)
    // num 65 to 90 (A - Z)
    printf("enter the character:\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("lower case letter : \n ");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("UPPER CASE LETTER :\n");
    }
    else
    {
        printf("neither lower case letter nor upper case letter :");
    }
}