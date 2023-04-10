  /*
  #include<stdio.h>
int sum(int a,int b);
int main(){
int a,b;
printf("enter the value of a: ");
scanf("%d",&a);
printf("enter the value of b: ");
scanf("%d",&b);
int s=sum(a,b);
printf("sum is : %d\n",s);
return 0;
}
int sum(int x,int y){
    return x+y;
}    */


    // function sum :
 #include<stdio.h>
  int sum(); // function decleration  :
 int main(){
   int a=5,b=10;

    sum(a,b); // function calling :
    sum(10,35); // function calling :
    //sum(); // function calling :
    return 0;
 }
  int sum(int a,int b){
    // int a,b,sum=0;
    // printf("Enter the value of a :\n");  // function definition :
    // scanf("%d",&a);
    // printf("Enter the value of b :\n");
    // scanf("%d",&b);
   // int a=20,b=50; // function definition :
   int  sum=a+b;
    printf("The value of sum is : %d\n",sum);
    //return sum;
 }
