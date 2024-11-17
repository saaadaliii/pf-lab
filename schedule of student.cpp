#include<iostream>
using namespace std;
int main()
{
	
    int grade, dayOfWeek;

    
    cout << "Enter grade (9, 10, or 11): ";
    cin >> grade;
    cout << "Enter day of the week (1 for Monday, 2 for Tuesday, ..., 5 for Friday): ";
    cin >> dayOfWeek;

    
    switch (grade) {
        case 9:
            cout << "Schedule for 9th Grade: ";
            
            switch (dayOfWeek) {
                case 1:
                    cout << "Math" << endl;
                    break;
                case 2:
                    cout << "English" << endl;
                    break;
                case 3:
                    cout << "Science" << endl;
                    break;
                case 4:
                    cout << "History" << endl;
                    break;
                case 5:
                    cout << "Physical Education" << endl;
                    break;
                default:
                    cout << "Invalid day!" << endl;
            }
            break;
        
        case 10:
            cout << "Schedule for 10th Grade: ";
            
            switch (dayOfWeek) {
                case 1:
                    cout << "Biology" << endl;
                    break;
                case 2:
                    cout << "Math" << endl;
                    break;
                case 3:
                    cout << "Literature" << endl;
                    break;
                case 4:
                    cout << "Chemistry" << endl;
                    break;
                case 5:
                    cout << "Physical Education" << endl;
                    break;
                default:
                    cout << "Invalid day!" << endl;
            }
            break;

        case 11:
            cout << "Schedule for 11th Grade: ";
            
            switch (dayOfWeek) {
                case 1:
                    cout << "Physics" << endl;
                    break;
                case 2:
                    cout << "English" << endl;
                    break;
                case 3:
                    cout << "Math" << endl;
                    break;
                case 4:
                    cout << "Chemistry" << endl;
                    break;
                case 5:
                    cout << "History" << endl;
                    break;
                default:
                    cout << "Invalid day!" << endl;
            }
            break;

        default:
            cout << "Invalid grade! Please enter 9, 10, or 11." << endl;
    }

    return 0;
}
