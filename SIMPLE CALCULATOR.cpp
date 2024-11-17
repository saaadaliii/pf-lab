#include<iostream>
using namespace std;
int main()
{
	int choice;
	double num1 , num2;
	 cout<<"Simple Calculator\n";
	 cout<<"1. Addition\n";
	 cout<<"2. Subtraction\n";
	 cout<<"3. Multiplication\n";
	 cout<<"4. Division\n";
	  
	  cout<<"enter choice (1-4):";
	  cin>> choice;
	   
	  cout<<"enter two numbers:";
	  cin>>num1 >> num2;
	  
	  switch (choice){
	  	case1:
	  		cout<<num1 << "+"<<num2 << "="<<num1 + num2;
	  		break;
	  	case2:
	  		cout<<num1 << "-"<<num2<< "="<<num1 + num2;
	  		break;
	  	case3:
	  		cout<<num1 << "*"<<num1 * num2;
	  		break;
	  	case4:
	  		if(num2 !=0)
	  		cout<<"Eror:Dvision by zero";
	  		break;
	  		default:
	  			cout<<"Ivalid choice";
	  	}
	  	return 0;
}
