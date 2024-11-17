#include<iostream>
using namespace std;
int main()
{
int hour;
cout << "Enter hour (0-24):";
cin >> hour;
switch (hour / 6) {
case 0:
    cout << "Night";  
    break;
case 1:
    cout << "Morning";
	 break;
case 2:
   cout <<"Afternoon";
   break;
case 3:
   cout << "Evening";
   break;
case 4:
    cout << "Night"; 
	break;
default:
    cout << "Invalid hour";
}
return 0;
}
