#include<stdio.h>
#include<math.h>
int main() 
{
    float a, b, c, T; 
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    // Calculating T = 2 * a + √(b + 9c)
    T = (2 * a) + sqrt(b + (9 * c));
    printf("Result (T) = %.2f\n", T);
    return 0;
}
