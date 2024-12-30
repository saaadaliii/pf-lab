#include <stdio.h>

int main() {
    int number;
    int odd_count = 0;
    int even_count = 0;

    while (1) {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        if (number == 0) {
            break;
        }

        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    printf("Total odd numbers: %d\n", odd_count);
    printf("Total even numbers: %d\n", even_count);

    return 0;
}
