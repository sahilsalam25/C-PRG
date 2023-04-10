// print the input_output_of the string by various method as given below in the code :
#include <stdio.h>
int main()
{
    char name[30];
    // char firstname[30],lastname[30];
    printf("Enter Name:\n");
    // scanf("%s", name); // print till before user give the whitespace : if user gives a whitespace then after whitespace it will not print anything that's why we use < gets() > function :
    // printf("%s %s", firstname, lastname);
    gets(name); // taking input from the user :
    //printf("%s\n", name);

    //  printf("%.10s\n", name); // print only first 10 letter of the string given by the user :
    // printf("%10.5s\n", name); // print the 10  whitespace in output :
    //  printf("%s\n",&name[2]); // print the string after the 2 letter of given output string :

    // puts (name); // use for printing the string output :
   puts(name);
    return 0;
}