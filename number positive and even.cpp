#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Enter a number:";\
	cin>>num;
	if(num>0){
		if(num % 2 == 0)
	    	cout<<"number is positive and even.";
		else
	    	cout<<"number is positive but not even.";
	} 
	    else
    	cout<<"number is not positive.";
	
}
