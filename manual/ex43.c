#include<stdio.h>
#define PI 3.14159
  int main() 
{
    float radi, area, circum; 
    printf("Enter the radius of the circle: ");
    scanf("%f", &radi);
    area = PI * radi * radi;
    circum = 2 * PI * radi;
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circum);
    return 0;
}
