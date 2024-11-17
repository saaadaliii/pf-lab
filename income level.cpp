#include<iostream>
using namespace std;
int main(){
	double income;
	
	cout<<"Enter annual income:";
	cin>>income;
	if(income>=100000)
    	cout<<"Tax Bracket:30%";
	else if(income>=5000)
	   cout<<"Tax Bracket:25%";
	else if(income>=20000)
    	cout<<"Tax Bracket:20%";
	else 
	    cout<<"Tax Bracket:10%";

}

