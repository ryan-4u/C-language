#include<stdio.h>
#include<math.h>
int main() 
{
    float a, b, c, discr, r1, r2, real, imag;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discr = b * b - 4 * a * c;

    if (discr > 0) 
    {
        r1 = (-b + sqrt(discr)) / (2 * a);
        r2 = (-b - sqrt(discr)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    } 
    else if (discr == 0) 
    {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root 1 = Root 2 = %.2f\n", r1);
    } 
    else 
    {
        real = -b / (2 * a);
        imag = sqrt(-discr) / (2 * a);
        printf("Roots are complex and distinct:\n");
        printf("Root 1 = %.2f + %.2fi\n", real, imag);
        printf("Root 2 = %.2f - %.2fi\n", real, imag);
    }
    return 0;
}
