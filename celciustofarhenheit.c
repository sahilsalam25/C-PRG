#include<stdio.h>
float convertTemp(float celcius);
int main(){
    //float far; not working far ka value hi pass krna padega
    // printf("enter the value of far");
    // scanf("%f",&far);
    float far=convertTemp(37);/ //Normal Human body temp 37 celcius,98.5 farhenheit
    printf("far is :%f",far);
    return 0;
}
float convertTemp(float celcius){
    float far=celcius*(9.0/5.0)+32;
    return far;
}