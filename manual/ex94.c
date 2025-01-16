#include<stdio.h>
int main() 
{
    int num, original, reverse = 0, remainder;
 
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    // Reversing the number
    while (num != 0) 
    {
        remainder = num % 10;        // Extract the last digit
        reverse = reverse * 10 + remainder; // Append it to reverse
        num = num / 10;             // Remove the last digit
    }

    // Checking if the original number is equal to its reverse
    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);

    return 0; 
}
