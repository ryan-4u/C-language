#include<stdio.h>
int main() 
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;

     
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    ptr1 = str1; // Pointer to the first string

    // Move the pointer to the end of the first string
    while (*ptr1 != '\0') 
    {
        ptr1++;
    }

    ptr2 = str2; // Pointer to the second string

    // Append the second string to the first
    while (*ptr2 != '\0') 
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0'; // Null terminate the concatenated string

    printf("The concatenated string is: %s\n", str1);

    return 0; 
}
