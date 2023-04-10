// Write a Program to Print length of a given String :
#include <stdio.h>
#include <string.h>
int main()
{

    int i=0, count = 0;
    char name[50];
    printf("Enter Name :\n");
    gets(name);
    puts(name);
   // count = strlen(name); // by using direct string method 
    while (name[i] != '\0') 
    {
        count++;              // by using loop find the length of strings :
        i++;
    }

    printf("The lenght of string %s is = %d\n",name, count);
    return 0;
}
