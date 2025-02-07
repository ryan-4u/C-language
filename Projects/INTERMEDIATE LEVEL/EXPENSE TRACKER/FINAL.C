#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_EXPENSES 1000000
#define MAX_CATEGORIES 25
#define MAX_DESC_LENGTH 200
#define MAX_CATEGORY_LENGTH 30

typedef struct {
    char category[MAX_CATEGORY_LENGTH];
    char date[11]; // YYYY-MM-DD
    char description[MAX_DESC_LENGTH];
    float amount;
} Expense;

Expense expenses[MAX_EXPENSES];
int expense_count = 0;
char categories[MAX_CATEGORIES][MAX_CATEGORY_LENGTH] = {"Food", "Transport", "Entertainment", "Miscellaneous"};
int category_count = 4;
int need_clear_screen = 0;

void display_menu();
void add_expense();
void view_expenses();
void generate_reports();
void add_category();
void about_us();
void clear_screen();
void get_current_date(char *date);
void wait_for_user();

int main() {
    int choice;

    while (1) {
        display_menu();
        printf("Select an option: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                add_expense();
                break;
            case 2:
                view_expenses();
                break;
            case 3:
                generate_reports();
                break;
            case 4:
                add_category();
                break;
            case 5:
                about_us();
                break;
            case 6:
                clear_screen();
                break;    
            case 7:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid option. Please try again.\n");
        }
    }

    return 0;
}

void display_menu() {
    if (need_clear_screen) {
        clear_screen();
        need_clear_screen = 0;  // Reset the flag
    }
    char date[11];
    get_current_date(date);
    printf("\n==============================\n");
    printf("%s\n", date);
    printf("         EXPENSE TRACKER      \n");
    printf("==============================\n");
    printf("1. Add Expense\n");
    printf("2. View Expense\n");
    printf("3. Generate Reports\n");
    printf("4. Add New Expense Categories\n");
    printf("5. About Us\n");
    printf("6. Clear Screen\n");
    printf("7. Exit\n");
    printf("==============================\n");
}

void add_expense() {
    if (expense_count >= MAX_EXPENSES) {
        printf("Expense limit reached. Cannot add more expenses.\n");
        return;
    }

    Expense new_expense;
    printf("Enter category (default categories: Food, Transport, Entertainment, Miscellaneous): ");
    fgets(new_expense.category, MAX_CATEGORY_LENGTH, stdin);
    new_expense.category[strcspn(new_expense.category, "\n")] = 0; // Remove newline

    printf("Enter date (YYYY-MM-DD): ");
    fgets(new_expense.date, 11, stdin);
    new_expense.date[strcspn(new_expense.date, "\n")] = 0; // Remove newline

    printf("Enter description: ");
    fgets(new_expense.description, MAX_DESC_LENGTH, stdin);
    new_expense.description[strcspn(new_expense.description, "\n")] = 0; // Remove newline

    printf("Enter amount: ");
    scanf("%f", &new_expense.amount);
    getchar(); // Consume newline character

    expenses[expense_count++] = new_expense;
    printf("Expense added successfully!\n");
}

void view_expenses() {
    if (expense_count == 0) {
        printf("No expenses recorded.\n");
        return;
    }

    printf("\nExpenses:\n");
    for (int i = 0; i < expense_count; i++) {
        printf("%s - %s - %s - $%.2f\n", expenses[i].date, expenses[i].category, expenses[i].description, expenses[i].amount);
    }
    wait_for_user();  // Pause and wait for the user
}

void generate_reports() {
    // Implement daily, monthly, and yearly report logic here
    printf("Report generation feature is not implemented yet.\n");
    wait_for_user();  // Pause and wait for the user
}

void add_category() {
    if (category_count >= MAX_CATEGORIES) {
        printf("Category limit reached. Cannot add more categories.\n");
        return;
    }

    char new_category[MAX_CATEGORY_LENGTH];
    printf("Enter new category: ");
    fgets(new_category, MAX_CATEGORY_LENGTH, stdin);
    new_category[strcspn(new_category, "\n")] = 0; // Remove newline

    for (int i = 0; i < category_count; i++) {
        if (strcmp(categories[i], new_category) == 0) {
            printf("Category already exists.\n");
            return;
        }
    }

    strcpy(categories[category_count++], new_category);
    printf("Category '%s' added successfully!\n", new_category);

}

void about_us() {
    printf("Expense Tracker v1.0\n");
    printf("Developed by Aaryan and The team \n");
    wait_for_user();  // Pause and wait for the user
}

void clear_screen() {
    // Clear the console screen
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void get_current_date(char *date) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(date, "%04d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
}

void wait_for_user() {
    printf("\nPress Enter to return to the main menu...");
    getchar();  // Wait for Enter
}
