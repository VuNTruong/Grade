#include <iostream>
#include "PassFailExam.h"
#include <string>

using namespace std;

void display1 (passFailExam *);
void display2 (GradedActivity *);

int main ()
{
	passFailExam testA (15, 70, 100);
	passFailExam testB (30, 75, 100);
	
	//pointer1 = &testA;
	display1 (&testA);
	//pointer1 = &testB;
	display1 (&testB);
	
	return 0;
}

void display1 (passFailExam *activity)
{
	cout << "Here is the result of the exam " << endl;
	cout << "Number of missed questions " << activity -> getMissed() << endl;
	cout << "Grade " << activity -> getLetterGrade() << endl;
	cout << "Number of correct answers " << activity -> getCorrect() << endl;
	cout << "Point for each questions " << activity -> getPointForEach() << endl;
	cout << "Mininum passing score " << activity -> getMinPassingScore() << endl;
	cout << "Score " << activity -> getScore() << endl;
	cout << endl;
}

void display2 (GradedActivity *activity)
{
	cout << "Here is the result of the exam " << endl;
	cout << "Score is " << activity -> getScore () << endl;
	cout << "Letter Grade is " << activity -> getLetterGrade () << endl;
} 
