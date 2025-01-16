#include<stdio.h>
int main() 
{
    int num, sum = 0, remainder;

 
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Calculating sum of digits
    while (num != 0) 
    {
        remainder = num % 10; // Extract the last digit
        sum += remainder;    // Add it to sum
        num = num / 10;      // Remove the last digit
    }

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
