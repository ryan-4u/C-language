#include <stdio.h>
int main() 
{
    int x;
    float y;
    char z;
    
    printf("Enter an character, a integer, and a float: ");
    
    // Using scanf to read an integer, float, and character
    int count = scanf("%c%d%f", &z, &x, &y);
    printf("The number of values scanned: %d\n", count);
    printf("Integer: %d, Float: %.2f, Character: %c\n",x, y, z);
    return 0;
}
