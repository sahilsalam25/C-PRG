/*
Multiplication Table of Given No n :
#include<stdio.h>
int main(){
  int num;
  printf("Enter the value of num you want to print table :\n");
  scanf("%d",&num);
  for(int i=1;i<=10;i++){
    printf("%d X %d = %d\n",num,i,(num*i));
  }
  return 0;
} */

/*  // Same Table But in Reverse order :
#include <stdio.h>
int main()
{
  int num;
  int i;
  printf("Enter the value of num you want to print the table :\n");
  scanf("%d", &num);
  for (i = 10; i >= 1; i--)
  {
      printf("%d X %d = %d\n", num, i, (num * i));
  }

  return 0;
}   */

/*// Using while loop :
#include<stdio.h>
int main(){
 int num,i=1;
 printf("Enter the num to print table :\n");
 scanf("%d",&num);
 while(i<=10){
     printf("%d X %d = %d\n",num,i,(num*i));
     i++;
 }
 return 0;
}  */

   // Print Multiplication table  Using Do While Loop & sum of Given Multiplicaton table Natural NO
#include <stdio.h>
int main()
{
    int num, i = 1;
    int sum = 0;
    printf("Enter the value of num to print table :\n");
    scanf("%d", &num);
    do
    {
        printf("%d X %d = %d\n", num, i, (num * i));
        sum = sum + i;

        i++;

    }

    while (i <= num);
    printf("The sum of Given no is : %d \n", sum);

    return 0;
}