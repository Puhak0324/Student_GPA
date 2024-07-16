#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double getGradePoint(char letterGrade) {
	switch (letterGrade) {
	case 'A':
		return 4.00;
	case 'B':
		return 3.00;
	case 'C':
		return 2.00;
	case 'D':
		return 1.00;
	default:
		return 0.00;
	}
}


int main() {

	int numCourses;
	double totalCredits = 0.00;
	double totalGradePoints = 0.00;

		cout << "How many courses have you taken?\n";
		cin >> numCourses;

		for (int i = 1; i <= numCourses; i++) {
			double credits;
			char letterGrade;

			cout << "Enter final grade earned for course " << i << ": \n";
			cin >> letterGrade;

			if (letterGrade == 'A') {
				credits = 4.00;
			}
			else if (letterGrade == 'B') {
				credits = 3.00;
			}
			else if (letterGrade == 'C') {
				credits = 2.00;
			}
			else if (letterGrade == 'D') {
				credits = 1.00;
			}
			else {
				credits = 0.00;
			}

			double gradePoint = getGradePoint(letterGrade);

			double courseGradePoints = gradePoint * credits;

			totalGradePoints += courseGradePoints;
			totalCredits += credits;
		}

		double gpa = totalGradePoints / totalCredits;

		cout << "Your GPA is: " << gpa << endl;

		if (gpa >= 3.9) {
			cout << "Congratulations, you've earned Summa cum laude!\n";
		}
		else if (gpa >= 3.7 && gpa <= 3.8) {
			cout << "Congratulations, you've earned Magna cum laude!\n";
		}
		else if (gpa >= 3.5 && gpa <= 3.6) {
			cout << "Congratulations, you've earned Cum laude!\n";
		}
		else {
			cout << "Unfortunately you did not qualify for honor roll.\n";
		}

		return 0;
}

