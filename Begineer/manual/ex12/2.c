#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    // Input 5 elements into the array
    printf("Enter 5 elements into the array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  // Store each element in the array
    }

    // Calculate the sum of all elements in the array
    for(i = 0; i < 5; i++) {
        sum += arr[i];  // Add each element to the sum
    }

    // Display the sum
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
