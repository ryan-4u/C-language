#include<stdio.h>
int main() 
{
    int num1, num2, sum, difference, product;
    float division;

     
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Performing operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = (float)num1 / num2; // Explicit casting for float division

    // Displaying results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Division = %.2f\n", division);

    return 0;
}
