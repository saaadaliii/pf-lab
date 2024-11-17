#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
	if(num>10){
		if(num % 2 == 0)
	    	cout<<" number is even and greater than 10";
		else
	    	cout<<"number is even but not greater than 10";
	}
    	else 
        	cout<<"number is not greater than 10";
        }
