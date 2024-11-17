#include<iostream>
using namespace std;
int main ()
{
	int age;
	double income;
    	cout<<"enter age:";
    	cin>>age;
        	cout<<"enter annual income:";
        	cin>>income;
	if(age>=25){
		if(income>=50000)
	    	cout<<"eligible for loan.";
	}
  	else
    	cout<<"age rerquirement not met for loan eligibility";
} 
	
