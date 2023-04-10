//5!=1*2*3*4*5=120;
//4!=1*2*3*4=24;
// fact(n)=fact(n-1)*n;... formula of factorial
#include<stdio.h>
int fact(int n);
int main(){
    printf("factorial of given number is:%d",fact(4));
    return 0;
}
int fact(int n){
    if(n ==0){// base case
        return 1;
    }
    int factNm1=fact(n-1); // factorial of (n-1) number;
    int factN=factNm1 * n;
    return factN;
}