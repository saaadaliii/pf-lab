#include<iostream>
using namespace std;
int main()
{
	string username, password;
	int Securitylevel;
	 
	 cout<<"Enter username:";
	 cin>>username;
	 cout<<"Enter password:";
	 cin>> password;
	 cout<<"Enter securitylevel (1-5):";
	 cin>>Securitylevel;
	 
	 if(username == "admin" && password == "password"){
	 	if(Securitylevel >=3)
	 	    cout<<"Access granted.";
	 	else
	    	cout<<"insufficient securitylevel";
    }
    else
       cout<<"Invalid username or password";
   }
