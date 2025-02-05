#include <stdio.h>
double power(double base, int exp) 
{
    double res = 1;
    int i;
    for (i = 1; i <= exp; i++) 
    {
        res *= base; // Multiply the base exponent times
    }
    return res;
}
int  main() 
{
    double base, res;
    int exp; 
    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);
    res = power(base, exp); // 
printf("%.2lf raised to power %d is: %.2lf\n", base, exp, res);
    
return 0;
}