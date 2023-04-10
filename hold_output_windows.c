#include <stdio.h>
#include<conio.h> // using this library fucntion to hold the output window beacuse we are using getch() : function in our program :
int main()
{

    int a, b, sum = 0;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is = %d\n", sum);
    getch(); // using getch for holding the output window while executing the .exe file in program folder...

    return 0;
}