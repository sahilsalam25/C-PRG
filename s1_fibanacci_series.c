#include <stdio.h>
int printfib(int );
int main(){
    
    int n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    printfib(n);

    return 0;

}
int printfib(int a){
    if(a==0 || a==1){
        return 1;
    }
    else { 
        return a+1;
    }
}