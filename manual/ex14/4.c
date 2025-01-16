#include<stdio.h>
int main() 
{
    char str1[100], str2[100];
    char *ptr1, *ptr2;
    int isEqual = 1; // Assume strings are equal initially

 
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    ptr1 = str1; // Pointer to the first string
    ptr2 = str2; // Pointer to the second string

    // Compare strings using pointers
    while (*ptr1 != '\0' || *ptr2 != '\0') 
    {
        if (*ptr1 != *ptr2) 
        {
            isEqual = 0; // Strings are not equal
            break;
        }
        ptr1++;
        ptr2++;
    }

    // Output result
    if (isEqual)
        printf("The strings are equal.\n");
    else
        printf("The strings are not equal.\n");

    return 0; 
}
