#include<stdio.h>
 int main() 
{
    char source[100], destination[100];
    char *src_ptr, *dest_ptr; 
    printf("Enter a string: ");
    gets(source); // Read the source string

    src_ptr = source;      // Pointer to source string
    dest_ptr = destination; // Pointer to destination string

    // Copying the string using pointers
    while (*src_ptr != '\0') 
    {
        *dest_ptr = *src_ptr;
        src_ptr++;
        dest_ptr++;
    }
    *dest_ptr = '\0'; // Null terminate the destination string

    printf("The copied string is: %s\n", destination);

    return 0; 
}
