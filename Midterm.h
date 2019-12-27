#ifndef MIDTERM_H
#define MIDTERM_H
#include "GradedActivity.h"

using namespace std;

class Midterm : public GradedActivity
{
	private:
		double score;
		int missed;
		int numberofQuestions;
		int correct;
		double pointForEach;
		
	public:
		void setNumberOfQuestions (int num)
		{
			numberofQuestions = num;
		}
		
		void setNumberOfCorrect (int num)
		{
			correct = num;
		}
		
		void setNumberOfMissed ()
		{
			missed = numberofQuestions - correct;	
		}
		
		void setPointForEach ()
		{
			pointForEach = 100 / numberofQuestions;
		}
		
		void setScoreForTest ()
		{
			score = pointForEach * correct;
		}
		
		int getCorrectAnswer ()
		{
			return correct;
		}
		
		int getMissedAnswer ()
		{
			return missed;
		}
		
		double getPointForEach ()
		{
			return pointForEach;
		}
		
		double getScoreForTest ()
		{
			return score;
		}
};
#endif
