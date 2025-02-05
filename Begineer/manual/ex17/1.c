#include <stdio.h>
// Define a structure
struct ExampleStruct {
    int intValue;
    float floatValue;
    char charValue;
};
// Define a union
union ExampleUnion {
    int intValue;
    float floatValue;
    char charValue;
};
main() 
{
    // Declare a structure and a union
    struct ExampleStruct s;
    union ExampleUnion u;
    // Assign values to structure members
    s.intValue = 10;
    s.floatValue = 20.5;
    s.charValue = 'A';
    // Assign values to union members (only one at a time)
    u.intValue = 10;
    u.floatValue = 20.5;
    u.charValue = 'A';
    // Display structure values
    printf("Structure values:\n");
    printf("Integer: %d\n", s.intValue);
    printf("Float: %.2f\n", s.floatValue);
    printf("Character: %c\n", s.charValue);
    // Display union values
    printf("\nUnion values (last assigned value is retained):\n");
    printf("Character: %c\n", u.charValue); // The last assigned value
    printf("Integer: %d\n", u.intValue);    // Overwritten
    printf("Float: %.2f\n", u.floatValue); // Overwritten
    // Display sizes
    printf("\nSize of structure: %lu bytes\n", sizeof(s));
    printf("Size of union: %lu bytes\n", sizeof(u));
    return 0; 
}
