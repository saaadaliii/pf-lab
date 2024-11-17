#include<iostream>
using namespace std;
int main()
{
	int choice;
	
	do{
		cout<<"\nmenu:"<< endl;
		cout<<"1. option 1"<< endl;
		cout<<"2. option2"<< endl;
		cout<<"3. option3"<< endl;
		cout<<"4. exit"<< endl;
		cout<<"enter your choice:";
		cin>>choice;
		
		switch(choice){
			cout<<"you selected option 1."<< endl;
			break;
			cout<<"you entered option 2."<< endl;
			break;
			cout<<"you entered option3."<< endl;
			break;
			cout<<"exiting the program."<< endl;
			break;
			cout<<"invalid choice!please try again."<< endl;
	}
}   while(choice!= 4);
    return 0;
}
