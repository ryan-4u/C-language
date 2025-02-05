#include<stdio.h>
int main() 
{
    float u, a, t, s; 
    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    printf("Enter the time (t): ");
    scanf("%f", &t);
    s = (u * t) + (0.5 * a * t * t);
    printf("Displacement (S) = %.2f\n", s);
    return 0;
}
