#include<iostream>
using namespace std;
int main()
{
	int mealtype = 1;//for breakfast,2 for lunch,3 for dinner
	int dayofweek = 3;//for monday,2 for tuesday,etc.
	
	switch(mealtype){
		case 1://breakfast
		switch(dayofweek){
			case 1:
				cout<<"Monday Breakfast: Pancakes"<< endl;
				break;
			case 2:	
				cout<<"Tuesday Breakfast: Omlette"<< endl;
				break;
			case 3:	
				cout<<"Wednesday Breakfast: French Toast"<< endl;
				break;
		 	default:
					cout<<"Other Breakfast Menu"<< endl;
		}
		 break;
		 
		 case 2://lunch
		   switch(dayofweek){
		   	case 1:
		   		cout<<"Monday Lunch:Sandwich"<< endl;
		   		break;
		   	case 3:
			   cout<<"Wednesday Lunch:Salad"<< endl;
			   break;
			     default:
			   cout<<"Other Lunch Menu"<< endl;	
		   }  
		    break;
		     
		    case 3://dinner
			switch(dayofweek){
				case 5:
					cout<<"Friday Dinner:Pasta"<< endl;
					break;
					case 6:
					cout<<"Saturday Dinner:Pizza"<< endl;
					break;
				    	default:
						cout<<"Other Dinner Menu"<< endl;			
			} 
			break;
			
			default:
				cout<<"Invalid Meal Type."<< endl;
	}
	return 0;
}
