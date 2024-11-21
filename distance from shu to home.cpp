#include<stdio.h>

int main()
{
	double miles;
	
	printf("Enetr the distance between SHU and your home in miles:");
	scanf("%lf",&miles);
	
	double kilometers = miles *  1.60934;// 1 miles is equal to 1.60934 kilometers
	double meters = kilometers * 1000;// 1 kilometer is equal to 1000 meters
	double centimeters = meters * 100;// 1 meter is equal to 100 centimeters
	double millimeters = centimeters * 10;// 1 centimeter is equal to 10 millimeters
	double micrometers = millimeters * 1000;// 1 millimeters is equal to 1000 micrometers
	
	printf("Distance in kilometers: %.6lf km\n", kilometers);
	printf("Distance in meters: %.lf m\n", meters);
	printf("Distance in centimeter: %lf cm\n", centimeters);
	printf("Distance in millimeter: %lf mm\n", millimeters);
	printf("Distance in micrometers: %lf micrometers\n", micrometers);
	
	return 0;

}
