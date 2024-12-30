#include <stdio.h>
int main() {
    int mainChoice, subChoice;

    // Display the main menu
    printf("Welcome to the Game Control Menu!\n");
    printf("Please choose an option:\n");
    printf("1. Start Game\n");
    printf("2. Game Settings\n");
    printf("3. Exit\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &mainChoice);

    // Main switch-case for different options
    switch (mainChoice) {
        case 1:  // Start the Game
            printf("You selected: Start Game\n");
            printf("Choose a sub-option:\n");
            printf("1. Play Level 1\n");
            printf("2. Play Level 2\n");
            printf("3. Back to Main Menu\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("You are playing Level 1\n");
                    break;
                case 2:
                    printf("You are playing Level 2\n");
                    break;
                case 3:
                    printf("Returning to Main Menu...\n");
                    break;
                default:
                    printf("Invalid choice. Returning to Main Menu...\n");
            }
            break;

        case 2:  
            printf("You selected: Game Settings\n");
            printf("Choose a setting to adjust:\n");
            printf("1. Sound Settings\n");
            printf("2. Display Settings\n");
            printf("3. Back to Main Menu\n");
            printf("Enter your choice (1-3): ");
            scanf("%d", &subChoice);

            switch (subChoice) {
                case 1:
                    printf("Adjusting Sound Settings...\n");
                    break;
                case 2:
                    printf("Adjusting Display Settings...\n");
                    break;
                case 3:
                    printf("Returning to Main Menu...\n");
                    break;
                default:
                    printf("Invalid choice. Returning to Main Menu...\n");
            }
            break;

        case 3: 
            printf("Exiting the game. Goodbye!\n");
            break;

        default:
            printf("Invalid choice. Please choose a valid option (1-3).\n");
    }

    return 0;
}

