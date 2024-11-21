#include<stdio.h>
int main()
{
	int i;
    double credit_hours[5], grade_points[5], weighted_sum = 0, total_credit_hours = 0, sgpa;
    
    printf("Enter the credit hours and grade points of 5 courses:\n");
    for(i = 0; i < 5; i++) 
	{
        printf("Course %d:\n", i + 1);
        printf("Credit Hours: ");
        scanf("%lf", &credit_hours[i]);// array is used to access or modify specific elements
        printf("Grade Points: ");
        scanf("%lf", &grade_points[i]);
        
         weighted_sum += credit_hours[i] * grade_points[i];
        total_credit_hours += credit_hours[i];
    }
    
        if (total_credit_hours != 0) {
        sgpa = weighted_sum / total_credit_hours;
        printf("\nThe SGPA for the semester is: %.2lf\n", sgpa);
    } else {
        printf("Error: Total credit hours cannot be zero.\n");
    }
    
       return 0;
}


