#include <stdio.h>
int main() {
    char gender, city;
    int age, salary, net_salary;

    
    printf("Enter gender (F/M): ");
    scanf("%c", &gender); 
    
    printf("Enter age: ");
    scanf("%d", &age); 
    
    printf("Enter city (K/H/S/G for Karachi/Hyderabad/Sukker/Ghotki): ");
    scanf(" %c", &city);  // Input city (K, H, S, or G)
    
    printf("Enter present salary: ");
    scanf("%d", &salary);  
    
    if (gender == 'F' || gender == 'f') {
        if (age >= 25 && age <= 35 && (city == 'K' || city == 'H' || city == 'S' || city == 'G')) {
            net_salary = salary + 2000;  // Add 2000 to the salary
            printf("Net Salary: %d\n", net_salary);
        } else {
            printf("Present Salary: %d\n", salary);
        }
    } else if (gender == 'M' || gender == 'm') {
        if (age >= 25 && age <= 40 && (city == 'S' || city == 'G' || city == 's' || city == 'g')) {
            net_salary = salary + 2500;  // Add 2500 to the salary
            printf("Net Salary: %d\n", net_salary);
        } else {
            printf("Present Salary: %d\n", salary);
        }
    } else {
        printf("Invalid gender input.\n");
    }

    return 0;
}

