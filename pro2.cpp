#include <iostream>
#include "PassFailExam.h"

void displayGrade (GradedActivity *);
void displayGradenon (GradedActivity &);
void displayPointForEach (passFailExam *);

using namespace std;

int main ()
{
	GradedActivity test1 (92);
	
	passFailExam test2 (25, 60, 100);
	
	GradedActivity *tests[4] = {
	new GradedActivity (88),
	new passFailExam (25, 60, 100),
	new GradedActivity (72), 
	new passFailExam (35, 60, 100)};
	
	passFailExam testx (40, 60, 50);
	
	displayGradenon (test1);
	displayGradenon (test2);
	
	cout << endl;
	displayPointForEach (&testx);
	
	for (int i = 0; i < 4; i++)
	{
		cout << "TEST NUMBER " << i + 1 << endl;
		displayGrade (tests[i]);
		cout << endl;
	}
	cout << endl;
}

void displayGrade (GradedActivity *activity )
{
	cout << "The activity's numeric score is " << activity -> getScore() << endl;
	cout << "The activity's letter grade is " << activity -> getLetterGrade() << endl;
	//cout << "The point for each for this activity is " << activity -> getPointForEach() << endl;
}

void displayPointForEach (passFailExam *activity)
{
	cout << "The point for each for this activity is " << activity -> getPointForEach() << endl;
}

void displayGradenon (GradedActivity &activity)
{
	cout << "The activity's numeric score is " << activity.getScore() << endl;
	cout << "The activity's letter grade is " << activity.getLetterGrade() << endl;
}
