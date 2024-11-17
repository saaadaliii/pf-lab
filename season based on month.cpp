#include<iostream>
using namespace std;
int main()
{
	int month;
	cout<<"enter month (1-12):";
	cin>>month;
	if(month == 12 || month == 1 || month == 2)
	    cout<<"Season: Winter";
	else if(month>=3 && month<=5)
	    cout<<"Season: Spring";
	else if(month>=6 && month<=8)
	    cout<<"Season: Summer";
	else 
    	cout<<"Season: Fall";
}
