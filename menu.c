#include "menu.h"

void clear_screen() {
    system("clear");
}

int main() {
    int choice;

    while (1) {
        clear_screen();
        printf("\nMain Menu\n");
        printf("1. Games\n");
        printf("2. Development Tools\n");
        printf("3. Productivity Apps\n");
        printf("4. Utility Apps\n");
        printf("5. Educational Apps\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                games_menu();
                break;
            case 2:
                development_tools_menu();
                break;
            case 3:
                productivity_apps_menu();
                break;
            case 4:
                utility_apps_menu();
                break;
            case 5:
                educational_apps_menu();
                break;
            case 0:
                clear_screen();
                printf("Thank you for using the app. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
                printf("Press Enter to continue...");
                while (getchar() != '\n'); // Clear input buffer
                getchar(); // Wait for Enter key
        }
    }

    return 0;
}

void games_menu() {
    int choice;

    while (1) {
        clear_screen();
        printf("\nGames Menu\n");
        printf("1. Text Adventure\n");
        printf("2. Hangman\n");
        printf("0. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                clear_screen();
                text_adventure();
                break;
            case 2:
                clear_screen();
                hangman();
                break;
            case 0:
                return;
            default:
                printf("Invalid choice. Please try again.\n");
                printf("Press Enter to continue...");
                while (getchar() != '\n'); // Clear input buffer
                getchar(); // Wait for Enter key
        }

        if (choice == 1 || choice == 2) {
            printf("\nPress Enter to return to the Games Menu...");
            while (getchar() != '\n'); // Clear input buffer
            getchar(); // Wait for Enter key
        }
    }
}

// Placeholder functions for other menus and games
void development_tools_menu() {
    printf("Development Tools - Coming soon!\n");
}

void productivity_apps_menu() {
    printf("Productivity Apps - Coming soon!\n");
}

void utility_apps_menu() {
    printf("Utility Apps - Coming soon!\n");
}

void educational_apps_menu() {
    printf("Educational Apps - Coming soon!\n");
}

void text_adventure() {
    printf("Text Adventure Game - Coming soon!\n");
}

void hangman() {
    printf("Hangman Game - Coming soon!\n");
}