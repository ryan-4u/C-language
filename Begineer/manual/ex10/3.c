#include <stdio.h>

int main() {
    int i, j;

    // Outer loop for each row
    for(i = 1; i <= 5; i++) {
        // Inner loop for printing numbers
        for(j = 1; j <= i; j++) {
            printf("%d ", j);  // Print the value of j
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
