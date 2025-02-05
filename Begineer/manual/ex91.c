#include<stdio.h>
int main() 
{
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    while (num != 0) 
    {
        num = num / 10;
        count++;
    }
    printf("The number of digits: %d\n", count);
    return 0; 
}
