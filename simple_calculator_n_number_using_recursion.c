
// function_recursion_print_sum_of_n_natural_number :
#include <stdio.h>
int x;
int printSum(int);
int main()
{
    int Result;
    // printf("Enter '0' for final result or Total_value : \n"); // for_printing_sum_value :
    printf("Enter '1' for final result or Total_value : \n"); // for_printing_multiplication_value :
    Result = printSum(x); // we are paasing 5 in printSum function ie it will print sum of 5 first 5 natural number ...we can  pass any number in printSum function...  for ex we want to print 10 , 11 ,12 etc just write in printSum function which number you want to print :
   // printf("The value of sum is = %d\n", Result);
    printf("The value of Multiplication is = %d\n", Result);

    return 0;
}
int printSum(int x)
{
    printf("Enter the number : "); // take  n number from the user :
    scanf("%d",&x);
     // int sum = 0;
     int multiplication=1;
    //  int substraction=0;
     // if (x == 0) // give_this_condition_for_sum_value_because_if we give 1 then 1 will add in the final result or total_value that's why we have to give "0" as a base condition :    
    if (x == 1) //  give_this_condition_for_multiplication_value_because_if we give "0" then 0  multiply with any no gives  the final result or total_value  = "0" that's why we have to give "1" as a base condition :
    {
        return x;
    }
    // sum = x + printSum(x - 1);
     multiplication = x * printSum(x - 1);
     // substraction = x  - printSum(x - 1); // to_print_difference_of_n_natural_number :
     // return substraction; // Not_giving_correct_output_INSHA'ALLAH Leter_solve_this_problem :
     // return sum;
     return multiplication;
}  
