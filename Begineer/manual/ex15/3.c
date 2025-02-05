    #include <stdio.h>
#define PI 3.14159

// Function to calculate area and circumference using call by //reference
void calculateCircle(float rad, float *area, float *circum) 
{
    *area = PI * rad * rad;         
    *circum = 2 * PI * rad;         
}
  main() 
{
    float rad, area, circum;
    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    calculateCircle(rad, &area, &circum);
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circum);
    
return 0;
}