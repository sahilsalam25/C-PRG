#include <stdio.h>
int main()
{

    int a[5];
    // <Method_No_1 >  Compile_Time_ARRAY_Initialization :
    // all  the given below are the method to declare & initialize an ARRAY_function :
    // int a[]={5,10,50,100,55,20,10,20};  // in the blank space "<[]>" means we can store n number of data in the array :
    // int a[5]={10,20,30,35,45};
    // int a[3+3]={10,20,30,35,45,55,100,210,45};
    // int a[5*2]={10,20,30,35,45};
    // char[]={'S','A','H','I','L'};  // in the blank space "<[]>" means we can store n number of data in the array :
    // char[20]={'S','A','L','A','M'};
    // float[]={5.5,2.5,10.10,20.8,1.2}; // in the blank space "<[]>" means we can store n number of data in the array :
    // float[25]={5.5,2.5,10.10,20.8,1.2};
    int i;
    printf("Enter the array elements :\n"); // <Method_No_2 >  Run_Time_Array_Initialization :
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Array elements at index %d is : %d\n", i, a[i]);
    }
    printf("Array Elements in Reverse Order Are :\n");
    for (i = 4; i >= 0; i--)
    {
        printf("Array elements at index %d is : %d\n", i, a[i]);
    }

    return 0;
}