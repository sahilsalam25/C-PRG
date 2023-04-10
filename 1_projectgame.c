#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number,guess,numguesses=1;
    // int random;
    // int srandom;
    srand(time(0));
    number=rand()%100 +1 ; // generate random no between 1 to 100 ;
    printf("the random number is : %d\n",number);
    do{
        printf("guess the number between 1 to 100 : \n");
        scanf("%d",&guess);
        if(guess > number){
            printf("Lower number please : \n");
        }
        else if(guess < number){
            printf("Higher number please : \n");
        }
        else {
            printf("you guessed it in %d attempts : \n",numguesses);
        }
        numguesses++;
    } while(guess !=number);
    return 0;
}


