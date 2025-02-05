#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for each row
    for(i = 5; i >= 1; i--) {
        // Inner loop for each column
        for(j = 1; j <= i; j++) {
            printf("* ");  // Print asterisk followed by a space
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
