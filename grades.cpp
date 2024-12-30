#include <stdio.h>
int main() {
    int marks;

    printf("Enter the marks obtained by the student (out of 100): ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade: A+\n");
    } else if (marks >= 70 && marks < 90) {
        printf("Grade: A\n");
    } else if (marks >= 50 && marks < 70) {
        printf("Grade: B\n");
    } else {
        printf("Grade: F\n");
    }

    return 0;
}

