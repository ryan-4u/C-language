#include<stdio.h>
 int main() 
{
    int num, first, last, sum;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    last = num % 10;
    while (num >= 10) 
    {
        num = num / 10;
    }
    first = num;
    sum = first + last;
    printf("The sum of the first and last digit is: %d\n", sum);
    return 0;
}
