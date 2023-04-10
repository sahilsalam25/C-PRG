#include<stdio.h>
#include<math.h>
float araeCircle(float radius);
float areaSquare(float side);
float areaRectangle(float a,float b);
int main(){
   float a=5.0,b=4.0;
   float radius=10.0;
   float side=10.0;
   printf("area of square is :%f\n",areaSquare(side));
   printf("the area of rectangle is :%f\n",areaRectangle(a,b));
  // printf("area of circle is %f\n",areaCircle(radius));


    return 0;
}

float areaCircle(float radius){
    return radius*radius;
}

float areaSquare(float side){
    return side*side;
}
float areaRectangle(float a,float b){
    return a*b;
}