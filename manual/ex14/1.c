#include<stdio.h>
int main() 
{
    char str[100];
    char *ptr;
    int length = 0; 
    printf("Enter a string: ");
    gets(str); // Read the string

    ptr = str; // Initialize pointer to the start of the string

    // Traverse the string to find its length
    while (*ptr != '\0') 
    {
        length++;
        ptr++; // Move the pointer to the next character
    }

    printf("The length of the string is: %d\n", length);

    return 0; 
}
