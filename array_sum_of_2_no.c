// Write a program to read two array of size [5] & and store the sum value of these array in to third array :
#include <stdio.h>
int main()
{
    int i;
    int arr1[5], arr2[5], sumArr[5]; // Array Decleration :
    printf("Enter the first array elements :\n");
    for (i = 0; i <= 4; i++)
    {

        scanf("%d", &arr1[i]);
    }
    printf("Enter the second array elements :\n");
    for (i = 0; i <= 4; i++)
    {

        scanf("%d", &arr2[i]);
    }
    for (i = 0; i <= 4; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
        printf("Sum Array Element of index %d is = %d\n", i, sumArr[i]);
    }

    return 0;
}
