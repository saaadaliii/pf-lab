#include <stdio.h>

int main() {
    int schoolChoice, departmentChoice;

    // Display the menu for selecting a school
    printf("Choose the School:\n");
    printf("1. School of Computer Science\n");
    printf("2. School of Business\n");
    printf("3. School of Engineering\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &schoolChoice);

    // Nested switch-case for handling school and department selection
    switch(schoolChoice) {
        case 1: // School of Computer Science
            printf("You selected: School of Computer Science\n");
            printf("Choose the Department:\n");
            printf("1. Department of Informatics\n");
            printf("2. Department of Machine Learning\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &departmentChoice);
            
            switch(departmentChoice) {
                case 1:
                    printf("You selected: Department of Informatics\n");
                    break;
                case 2:
                    printf("You selected: Department of Machine Learning\n");
                    break;
                default:
                    printf("Invalid department choice!\n");
            }
            break;

        case 2: // School of Business
            printf("You selected: School of Business\n");
            printf("Choose the Department:\n");
            printf("1. Department of Commerce\n");
            printf("2. Department of Purchasing\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &departmentChoice);
            
            switch(departmentChoice) {
                case 1:
                    printf("You selected: Department of Commerce\n");
                    break;
                case 2:
                    printf("You selected: Department of Purchasing\n");
                    break;
                default:
                    printf("Invalid department choice!\n");
            }
            break;

        case 3: // School of Engineering
            printf("You selected: School of Engineering\n");
            printf("Choose the Department:\n");
            printf("1. Department of Mechanical Engineering\n");
            printf("2. Department of Mechatronics Engineering\n");
            printf("Enter your choice (1-2): ");
            scanf("%d", &departmentChoice);
            
            switch(departmentChoice) {
                case 1:
                    printf("You selected: Department of Mechanical Engineering\n");
                    break;
                case 2:
                    printf("You selected: Department of Mechatronics Engineering\n");
                    break;
                default:
                    printf("Invalid department choice!\n");
            }
            break;

        default:
            printf("Invalid school choice!\n");
    }

    return 0;
}
