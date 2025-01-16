#include <stdio.h>

// Define a structure to store student details
struct Student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float averageMarks;
};

// Function to display student details
void displayStudents(struct Student students[], int n) 
{
    int i;

    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Address: %s\n", students[i].address);
        printf("Age: %d\n", students[i].age);
        printf("Average Marks: %.2f\n", students[i].averageMarks);
        printf("-------------------------\n");
    }
}

main() 
{
    struct Student students[12]; // Array to store details of 12 students
    int i;
    // Read student details
    printf("Enter details of 12 students:\n");
    for (i = 0; i < 12; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // To consume the newline character
        printf("Name: ");
        gets(students[i].name);
        printf("Address: ");
        gets(students[i].address);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Average Marks: ");
        scanf("%f", &students[i].averageMarks);
        printf("-------------------------\n");
    }
    // Call the function to display student details
    displayStudents(students, 12);
return 0;
    }
