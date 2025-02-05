#include<stdio.h>
#include<math.h>
int main() 
{
    float p, r, t, si, ci;
    printf("Enter Principal amount: ");
    scanf("%f", &p);
    printf("Enter Rate of Interest: ");
    scanf("%f", &r);
    printf("Enter Time (in years): ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    ci = p * (pow((1 + r / 100), t)) - p;
    printf("Simple Interest: %.2f\n", si);
    printf("Compound Interest: %.2f\n", ci);
    return 0;
}
