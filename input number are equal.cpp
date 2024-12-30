#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	
	printf("Enter first number:");
	scanf("%d",& num1);
    
	printf("Enter second number:");
	scanf("%d",& num2);
	
	printf("Enter third number:");
	scanf("%d",& num3);
		
	if (num1 == num2){
	   if (num2 == num3){
	   printf("All values are equal");
	  } else {
	       ("They all are not equal");
  }
     }else{
    printf("They all are not equal");
	 }
     
}
