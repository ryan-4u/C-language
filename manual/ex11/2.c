#include<stdio.h>
int main() 
{
    int num1, num2, sum;
    int add(int *, int *, int *);

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    add(&num1, &num2, &sum);
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
    int add(int *x, int *y, int *result)
{
    *result = *x + *y;  
}
