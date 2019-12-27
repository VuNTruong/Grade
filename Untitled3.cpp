#include <iostream>
#include "Midterm.h"
#include <string>

using namespace std;

int main ()
{
	Midterm test;
	int number, correctAnswer, missedAnswer;
	double score, pointForEach;
	string letterGrade;
	
	cout << "Enter the number of questions for this test ";
	cin >> number;
	test.setNumberOfQuestions(number);
	
	cout << "Enter the number of correct answers ";
	cin >> correctAnswer;
	test.setNumberOfCorrect(correctAnswer);
	
	cout << "Here is the detail of the test " << endl;
	cout << "Number of correct answers " << correctAnswer << endl;
	missedAnswer = test.getMissedAnswer();
	cout << "Number of missed answer " << missedAnswer << endl;
	pointForEach = test.getPointForEach();
	cout << "Point for each " << pointForEach << endl;
	score = test.getScoreForTest();
	cout << "Final Score " << score << endl;
	test.setScore(score);
	letterGrade = test.getGrade();
	cout << letterGrade;
}
