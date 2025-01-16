#include<stdio.h>
int main() 
{
    int arr[2][3]; // Declaration of a 2x3 2D array
    int i, j; 
    printf("Enter elements for a 2x3 matrix:\n");

    // Input for the 2D array
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Displaying the 2D array
    printf("\nThe elements of the matrix are:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
