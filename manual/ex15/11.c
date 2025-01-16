#include<stdio.h>
void swapByValue(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}
int main() 
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);
    swapByValue(x, y); // Call by value
    printf("After swapping in main: x = %d, y = %d\n", x, y);
return 0;
}