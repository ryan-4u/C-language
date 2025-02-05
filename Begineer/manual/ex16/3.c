#include <stdio.h>

// Define a structure for distance
struct Distance {
    int feet;
    int inches;
};

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) 
{
    struct Distance result;

    // Add feet and inches separately
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    // Convert inches to feet if greater than or equal to 12
    if (result.inches >= 12) 
    {
        result.feet += result.inches / 12;
        result.inches = result.inches % 12;
    }

    return result;
}

main() 
{
    struct Distance dist1, dist2, total;
    // Input for first distance
    printf("Enter the first distance:\n");
    printf("Feet: ");
    scanf("%d", &dist1.feet);
    printf("Inches: ");
    scanf("%d", &dist1.inches);

    // Input for second distance
    printf("\nEnter the second distance:\n");
    printf("Feet: ");
    scanf("%d", &dist2.feet);
    printf("Inches: ");
    scanf("%d", &dist2.inches);

    // Add the two distances
    total = addDistances(dist1, dist2);

    // Display the result
    printf("\nThe total distance is: %d feet and %d inches\n", total.feet, total.inches);
    return 0; 
}
