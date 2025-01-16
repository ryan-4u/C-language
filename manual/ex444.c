#include<stdio.h>

   #include<math.h>
  int main() 
{
    float b, p, H;
     
    printf("Enter the value of base (b): ");
    scanf("%f", &b);
    printf("Enter the value of perpendicular (p): ");
    scanf("%f", &p);
    // Calculating H = √(b² + p²)
    H = sqrt((b * b) + (p * p));
    printf("Hypotenuse (H) = %.2f\n", H);
    return 0; 
}
