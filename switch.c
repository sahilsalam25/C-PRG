#include<stdio.h>
int main(){
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("one\n");
        break;
        case 2:
        printf("two\n");
      
        break;
        case 3:
        printf("three\n");
        break;
        default:
        printf("invalid choice\n");
    }
}