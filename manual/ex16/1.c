   #include <stdio.h>
// Define the structure named 'Company'
struct Company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployees;
};
   main() 
{
    struct Company comp;  
    
    printf("Enter the company name: ");
    gets(comp.name);
    printf("Enter the company address: ");
    gets(comp.address);
    printf("Enter the company phone number: ");
    gets(comp.phone);
    printf("Enter the number of employees: ");
    scanf("%d", &comp.noOfEmployees);
    printf("\nCompany Details:\n");
    printf("Name: %s\n", comp.name);
    printf("Address: %s\n", comp.address);
    printf("Phone: %s\n", comp.phone);
    printf("Number of Employees: %d\n", comp.noOfEmployees);
    return 0; 
}
