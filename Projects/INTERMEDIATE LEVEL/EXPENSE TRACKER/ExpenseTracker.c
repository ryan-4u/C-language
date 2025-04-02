#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_DESC 100
#define MAX_CAT 50

typedef struct Expense {
    char description[MAX_DESC];
    float amount;
    char date[11]; // Format: YYYY-MM-DD
    char category[MAX_CAT];
    struct Expense* next;
} Expense;

typedef struct Category {
    char name[MAX_CAT];
    struct Category* next;
} Category;

Expense* expenseHead = NULL;
Category* categoryHead = NULL;

void clearScreen() {
    system("clear || cls");
}

void addCategory() {
    Category* newCategory = (Category*)malloc(sizeof(Category));
    printf("Enter category name: ");
    scanf("%s", newCategory->name);
    newCategory->next = categoryHead;
    categoryHead = newCategory;
    printf("Category added successfully!\n");
}

void removeCategory() {
    char name[MAX_CAT];
    printf("Enter category name to remove: ");
    scanf("%s", name);
    
    Category* current = categoryHead;
    Category* previous = NULL;

    while (current != NULL && strcmp(current->name, name) != 0) {
        previous = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Category not found!\n");
        return;
    }

    if (previous == NULL) {
        categoryHead = current->next;
    } else {
        previous->next = current->next;
    }
    free(current);
    printf("Category removed successfully!\n");
}

void viewCategories() {
    Category* current = categoryHead;
    if (current == NULL) {
        printf("No categories available.\n");
        return;
    }
    printf("Categories:\n");
    while (current != NULL) {
        printf("- %s\n", current->name);
        current = current->next;
    }
}

void addExpense() {
    Expense* newExpense = (Expense*)malloc(sizeof(Expense));

    getchar(); // Clear any leftover newline before taking input

    printf("Enter description: ");
    fgets(newExpense->description, MAX_DESC, stdin);
    newExpense->description[strcspn(newExpense->description, "\n")] = '\0'; // Remove newline

    printf("Enter amount: ");
    if (scanf("%f", &newExpense->amount) != 1) {
        printf("Invalid input for amount. Try again.\n");
        free(newExpense);
        return;
    }

    while (getchar() != '\n'); // ✅ Ensure buffer is cleared after amount input

    printf("Enter date (YYYY-MM-DD): ");
    fgets(newExpense->date, sizeof(newExpense->date), stdin);
    newExpense->date[strcspn(newExpense->date, "\n")] = '\0'; // Remove newline

    while (getchar() != '\n');

    printf("Enter category: ");
    fgets(newExpense->category, MAX_CAT, stdin);
    newExpense->category[strcspn(newExpense->category, "\n")] = '\0'; // ✅ Removes newline properly

    newExpense->next = expenseHead;
    expenseHead = newExpense;

    printf("Expense added successfully!\n");
}



void viewExpenses() {
    if (expenseHead == NULL) {
        printf("No expenses recorded today. Use 'Generate Report' to view past expenses.\n");
        return;
    }
    
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    char today[11];
    snprintf(today, sizeof(today), "%d-%02d-%02d", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);

    Expense *current = expenseHead;
    int found = 0;

    printf("\nToday's Expenses (%s):\n", today);
    while (current != NULL) {
        if (strcmp(current->date, today) == 0) {
            printf("Category: %s | Description: %s | Amount: %.2f\n",
                   current->category, current->description, current->amount);
            found = 1;
        }
        current = current->next;
    }

    if (!found) {
        printf("No expenses recorded today. Use 'Generate Report' to view past expenses.\n");
    }
}

void generateReport() {
    if (expenseHead == NULL) {
        printf("No expenses recorded.\n");
        return;
    }
    
    int choice;
    printf("\nGenerate report for:\n");
    printf("1. Weekly\n");
    printf("2. Monthly\n");
    printf("3. Yearly\n");
    printf("4. Overall\n");
    printf("Choose an option: ");
    scanf("%d", &choice);

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    int currentYear = tm.tm_year + 1900;
    int currentMonth = tm.tm_mon + 1;
    int currentDay = tm.tm_mday;

    double total = 0.0;
    int count = 0; // Count number of days included
    Expense* current = expenseHead;

    while (current != NULL) {
        struct tm expenseDate = {0};
        sscanf(current->date, "%d-%d-%d", &expenseDate.tm_year, &expenseDate.tm_mon, &expenseDate.tm_mday);
        expenseDate.tm_year -= 1900;
        expenseDate.tm_mon -= 1;

        time_t expenseTime = mktime(&expenseDate);
        double daysDifference = difftime(t, expenseTime) / (60 * 60 * 24);

        int include = 0;

        if (choice == 1 && daysDifference < 7) { // Weekly
            include = 1;
        } else if (choice == 2 && (expenseDate.tm_year == tm.tm_year) && (expenseDate.tm_mon == tm.tm_mon)) { // Monthly
            include = 1;
        } else if (choice == 3 && (expenseDate.tm_year == tm.tm_year)) { // Yearly
            include = 1;
        } else if (choice == 4) { // Overall
            include = 1;
        }

        if (include) {
            printf("Date: %s | Category: %s | Description: %s | Amount: %.2f\n",
                   current->date, current->category, current->description, current->amount);
            total += current->amount;
            count++;
        }

        current = current->next;
    }

    double avgDailyExpense = (count > 0) ? (total / count) : 0; // Avoid division by zero

    printf("\nTotal Expenses: %.2f\n", total);
    printf("Average Daily Expense: %.2f\n", avgDailyExpense);
}

void displayMenu() {
    printf("\nExpense Tracker Menu:\n");
    printf("1. Add Category (a)\n");
    printf("2. Remove Category (r)\n");
    printf("3. View Categories (v)\n");
    printf("4. Add Expense (e)\n");
    printf("5. View Expenses (x)\n");
    printf("6. Generate Report (g)\n");
    printf("7. Clear Screen (c)\n");
    printf("8. Exit (m)\n");
}

int main() {
    char choice;

    while (1) {
        displayMenu();
        printf("Choose an option: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                addCategory();
                break;
            case 'r':
                removeCategory();
                break;
            case 'v':
                viewCategories();
                break;
            case 'e':
                addExpense();
                break;
            case 'x':
                viewExpenses();
                break;
            case 'g':
                generateReport();
                break;
            case 'c':
                clearScreen();
                break;
            case 'm':
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid option! Please try again.\n");
        }
    }

    return 0;
}