#include<stdio.h>
int main()
{
	
    float a = 4.0, b = 9.0, x = 5.0, y = 6.0, c = 15.0, d = 8.5;
    float A;

    A = 7 * 7 * b * (x * y + a) / c - 0.8 + (2 * b * d / (x + a)) * (1 / y);
    
    printf("The value of A is: %.2f\n", A);

    return 0;

}
