#include <stdio.h>

int main() {
    int arr[5], i, largest, smallest;

    // Input 5 elements into the array
    printf("Enter 5 elements into the array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and smallest to the first element of the array
    largest = arr[0];
    smallest = arr[0];

    // Find the largest and smallest elements
    for(i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];  // Update largest if a larger element is found
        }
        if(arr[i] < smallest) {
            smallest = arr[i];  // Update smallest if a smaller element is found
        }
    }

    // Display the largest and smallest elements
    printf("The largest element in the array is: %d\n", largest);
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}
