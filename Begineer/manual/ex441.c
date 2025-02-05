#include<stdio.h>
int main() 
{
    float u, a, t, v; 
    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    printf("Enter the time (t): ");
    scanf("%f", &t);
    v = u + (a * t);
    printf("Final velocity (V) = %.2f\n", v);
    return 0;
}
