#include<stdio.h>
int main(){
    int age = 22;
    int *ptr=&age;
    int Age=*ptr;
    printf("age is :%d",Age);
    return 0;
}