#include<stdio.h>
int main() 
{
    int num, reverse = 0, remainder;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) 
    {
        remainder = num % 10;        // Extract the last digit
        reverse = reverse * 10 + remainder; // Append it to reverse
        num = num / 10;             // Remove the last digit
    }

    printf("The reversed number is: %d\n", reverse); 
}
