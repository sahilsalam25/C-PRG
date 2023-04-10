#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number;
    // int random;
    // int srandom;
    srand(time(0));
    number=rand()%100 +1 ; // generate random no between 1 to 100 ;
    printf("the random number is : %d\n",number);
    return 0;

}