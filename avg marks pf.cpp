#include<stdio.h>
int main()
{
	char studentname [50];
	int marks1, marks2, marks3;
	
	printf("enter studentname: ");
	scanf("%s", studentname);
	
	printf("enter english marks: ");
	scanf("%d", &marks1);
	
	printf("enter urdu marks: ");
	scanf("%d", &marks2);
	
	printf("enter maths marks: ");
	scanf("%d", &marks3);
	
	printf("the average marks is: %.2f",(marks1 + marks2 + marks3)/ 3.0);
	
	return 0;
	
}
