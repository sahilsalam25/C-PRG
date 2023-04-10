#include<stdio.h>
int main()
{
    char ch;
    printf("enter any letter\n");
    scanf("%c",&ch);
    if(ch >='A' && ch <='Z')
    {
        printf("UPPER CASE\n");

    }
    else if(ch >='a' && ch<='z')
    {
    printf("lower case\n");
    }
    else {

    
    printf("not a english letter\n");

}
}
