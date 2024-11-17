#include<iostream>
using namespace std;
int main ()
{
	int score;
	cout<<"enter score(out of 100)";
	cin>>score;
	if(score>=90)
	    cout<<"Achivement Excellent";
	else if(score>=80)
	    cout<<"Achivement Good";
	else if(score>=70)
	    cout<<"Achivement Fair";
	else if(score>=60)
	    cout<<"Achivement Pass";
	else
    	cout<<"Achivement Fail";
    }

