#include<stdio.h>
int main() 
{
    char ch; 
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is a capital letter.\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is a small letter.\n", ch);
    else if (ch >= '0' && ch <= '9')
        printf("%c is a digit.\n", ch);
    else
        printf("%c is a special symbol.\n", ch);
    return 0; 
}
