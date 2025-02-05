#include <stdio.h>

int main() {
    int arr[5], i, search, found = 0;

    // Input 5 elements into the array
    printf("Enter 5 elements into the array:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array for debugging purposes
    printf("The elements of the array are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  // Print all array elements to check input
    }
    printf("\n");

    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Search the element in the array
    for(i = 0; i < 5; i++) {
        if(arr[i] == search) {
            found = 1;
            break;  // Element found, exit the loop
        }
    }

    // Display result
    if(found == 1) {
        printf("Element %d found at index %d.\n", search, i);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
