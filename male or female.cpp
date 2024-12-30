#include <stdio.h>
int main() {
    char gender;

    
    printf("Enter a letter (m or f): ");
    scanf("%c", &gender);

    if (gender == 'm' || gender == 'M') {
        printf("You are a male\n");
    } else {
        printf("You are a female\n");
    }

    return 0;
}

