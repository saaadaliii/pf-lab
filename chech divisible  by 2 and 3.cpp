#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
	if(num % 2 == 0){
    	if(num % 3 == 0)
    	cout<<"number is divisible by both 2 and 3.";
	   else
      	cout<<"number is divisible by 2 not 3.";
} 
     else 
	   cout<<"number is not divisible by 2";
}
