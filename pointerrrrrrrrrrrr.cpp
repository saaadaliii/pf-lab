#include<iostream>
using namespace std;
int main()
{
	int value = 42;
	int* ptr =&value;
	cout<<"value" <<value << endl;
	cout<<"pointer points to value" << *ptr << endl;
}
