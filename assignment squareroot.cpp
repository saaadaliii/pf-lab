#include<stdio.h>
#include<math.h>// to used sqrt() for sqrt calculation
int main()
{
	float a = 3.14, b = 2.13;
	int c;
	float discriminant,x1,x2;
	
	printf("Enter the value of c:");
	scanf("%d",&c);
	
	discriminant = (b * b) - (4 * a * c);
	
	    if (discriminant >= 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a); 
        x2 = (-b - sqrt(discriminant)) / (2 * a); 
        
        printf("The roots of the equation are:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
	   else {
    	  	  printf("The equation has no real roots.\n");
    }
       
       return 0;
}
