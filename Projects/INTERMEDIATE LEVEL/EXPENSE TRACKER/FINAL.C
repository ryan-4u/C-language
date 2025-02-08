#include <stdio.h>
#include <conio.h>
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
char categories[MAX_CATEGORIES][MAX_CATEGORY_LENGTH] = {"Food", "Travel", "Fun","Study", "Miscellaneous"};
int category_count = 4;
int need_clear_screen = 0;

void display_menu();
void add_expense();
void view_expenses();
void generate_reports();
void category_management();
void add_category();
void delete_category();
void list_categories() ;
void about_us();
void clear_screen();
void get_current_date(char *date);
void wait_for_user();

int main() {
    int choice;

    while (1) {
        display_menu();
        printf("\nSelect an option: ");
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
                category_management();
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
    printf("4. Categories Manager\n");
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

    for (int i = 0; i < category_count; i++) {
        printf("%-15s", categories[i]); // Print category with fixed width for alignment
        if ((i + 1) % 4 == 0) {
            printf("\n"); // Move to the next row after every 4 categories
        }
    }


    printf("Enter category (or type a new one): ");
    fgets(new_expense.category, MAX_CATEGORY_LENGTH, stdin);
    new_expense.category[strcspn(new_expense.category, "\n")] = 0; // Remove newline

    // Check if category is new and add it to the list
    int category_exists = 0;
    for (int i = 0; i < category_count; i++) {
        if (strcmp(categories[i], new_expense.category) == 0) {
            category_exists = 1;
            break;
        }
    }

    if (!category_exists && category_count < MAX_CATEGORIES) {
        strcpy(categories[category_count++], new_expense.category);
        printf("New category '%s' added successfully!\n", new_expense.category);
    }

    int day, month, year;
    printf("Enter date (dd-mm-yyyy): ");
    scanf("%2d-%2d-%4d", &day, &month, &year);
    getchar();  // Consume newline character

    // Store date as yyyy-mm-dd for easier sorting internally
    sprintf(new_expense.date, "%04d-%02d-%02d", year, month, day);

    printf("Enter description: ");
    fgets(new_expense.description, MAX_DESC_LENGTH, stdin);
    new_expense.description[strcspn(new_expense.description, "\n")] = 0; // Remove newline

    printf("Enter amount: ");
    scanf("%f", &new_expense.amount);
    getchar(); // Consume newline character

    expenses[expense_count++] = new_expense;
    printf("Expense added successfully!\n");
    wait_for_user();  // Pause and wait for the user
}


void view_expenses() {
    if (expense_count == 0) {
        printf("No expenses recorded.\n");
        return;
    }

    printf("\nExpenses:\n");
    for (int i = 0; i < expense_count; i++) {
        int day, month, year;
        sscanf(expenses[i].date, "%4d-%2d-%2d", &year, &month, &day);  // Extract date components
        printf("%02d-%02d-%04d - %s - %s - Rs.%.2f\n", day, month, year, expenses[i].category, expenses[i].description, expenses[i].amount);
    }
    wait_for_user();  // Pause and wait for the user
}

void generate_reports() {
    // Implement daily, monthly, and yearly report logic here
    printf("Report generation feature is not implemented yet.\n");
    wait_for_user();  // Pause and wait for the user
}

void category_management() {
    int choice;

    do {
        printf("\nCategory Management:\n");
        printf("1. Add Category\n");
        printf("2. Delete Category\n");
        printf("3. List Categories\n");
        printf("4. Return to Main Menu\n");
        printf("Select an option: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                add_category();
                break;
            case 2:
                delete_category();
                break;
            case 3:
                list_categories();
                break;
            case 4:
                printf("Returning to the main menu...\n");
                return;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while (1);
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

    wait_for_user();  // Pause and wait for the user
}

void delete_category() {
    if (category_count == 0) {
        printf("No categories available to delete.\n");
        return;
    }

    printf("Available categories:\n");
    for (int i = 0; i < category_count; i++) {
        printf("%d. %s\n", i + 1, categories[i]);
    }

    int delete_index;
    printf("Enter the number of the category to delete: ");
    scanf("%d", &delete_index);
    getchar(); // Consume newline character

    if (delete_index < 1 || delete_index > category_count) {
        printf("Invalid category number.\n");
        return;
    }

    // Shift categories up to fill the gap
    for (int i = delete_index - 1; i < category_count - 1; i++) {
        strcpy(categories[i], categories[i + 1]);
    }
    category_count--;
    printf("Category deleted successfully.\n");
}

void list_categories() {
    printf("\n");
    if (category_count == 0) {
        printf("No categories available.\n");
        return;
    }

    printf("Available categories:\n");
    for (int i = 0; i < category_count; i++) {
        printf("%-15s", categories[i]); // Print category with fixed width for alignment
        if ((i + 1) % 4 == 0) {
            printf("\n"); // Move to the next row after every 4 categories
        }
    }
    printf("\nNew categories can also be added during the 'Add Expense' process.\n");
}

void about_us() {

    printf("=======================================\n");
    printf("        Expense Tracker v1.0           \n");
    printf("=======================================\n");
    printf("Hello! Welcome to Expense Tracker.\n");
    printf("This application helps you efficiently record and manage your daily expenses.\n");
    printf("\nKey Features:\n");
    printf("1. Add and categorize your expenses easily.\n");
    printf("2. View and generate reports of your expenses.\n");
    printf("3. Customizable categories to suit your lifestyle.\n");
    printf("\nOur Mission:\n");
    printf("To provide a simple and effective solution for tracking expenses and managing your finances.\n");
    printf("\nDeveloped by Aaryan and the Team\n");
    printf("For feedback or suggestions, please contact us at aaryanofficial64@gmail.com \n");
    printf("=======================================\n");
    
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
    sprintf(date, "%02d-%02d-%04d", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}


void wait_for_user() {
    char ch;
    do {
        printf("\nSelect an option: \n");
        printf("M - Menu | E - Exit | C - Clear Screen\n");
        ch = _getch();  // Use _getch to capture key input without Enter

        if (ch == 'm' || ch == 'M') {
            printf("\nReturning to the main menu...\n");
            return; // Return to the menu
        } else if (ch == 'e' || ch == 'E') {
            printf("\nExiting the program. Goodbye!\n");
            exit(0); // Exit the program
        } else if (ch == 'c' || ch == 'C') {
            clear_screen();
            printf("\nScreen cleared successfully!\n");
        } else {
            printf("\nInvalid key. Please press 'M', 'E', or 'C'.\n");
        }
    } while (1); // Keep looping until a valid option is selected
}

