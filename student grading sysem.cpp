#include<iostream>
using namespace std;
int main() {
    int numSubjects;
    float average;
    
const int GRADE_A = 90;// constants is used for grade boundaries
const int GRADE_B = 80;
const int GRADE_C = 70;
const int GRADE_D = 60;
const int GRADE_F = 50;

    char getGrade(float average) {
	

	if (average >= 90) {
        return 'A';
    }
	 else if (average >= 80) {
        return 'B';
    }
	 else if (average >= 70) {
        return 'C';
    } 
	else if (average >= 60) {
        return 'D';
    }
	 else {
        return 'F';
    }
}
    
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    
    float marks[numSubjects];// Array is used to store marks of each subject
    
    for (int i = 0; i < numSubjects; i++){ // for Loop is used to collect marks for each subject 
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        
        if (marks[i] < 0 || marks[i] > 100) {	// using || for OR
            cout << "Invalid input! please try again marks should be beween 0-100" << endl;
            break; // Exit loop when invalid output detected
        }
    }
    
    float totalMarks = 0;
    for (int i = 0; i < numSubjects; i++) {
        totalMarks += marks[i];
    }
    
    float average = totalMarks / numSubjects;

    cout << "\nTotal marks: " << totalMarks << endl;
    cout << "Average marks: " << average << endl;
    
    char grade = getGrade(average);
    cout << "Grade: " << grade << endl;
    
    return 0;
    

}

    



