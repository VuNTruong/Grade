#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H
#include "PassFail.h"
#include <string>

class passFailExam : public passFailActivity
{
	private:
		int missed;
		double pointForEach;
		int numQuestions;
	
	public:	
	// Default constructor
	passFailExam () : passFailActivity ()
	{
		missed = 0;
		pointForEach = 0.0;
		numQuestions = 0;
	}
	// Constructor
	passFailExam (int mi, double minPassScore, int num) : passFailActivity (minPassScore)
	{
		missed = mi;
		numQuestions = num;
		
		double numscore;
		pointForEach = 100 / numQuestions;
		numscore = pointForEach * (numQuestions - missed);
		setScore (numscore);
	}
	// set fuctions
	/*void set (int mi, int num)
	{
		
	}*/
	// Accessor function
	int getMissed ()
	{
		return missed;
	}
	int getCorrect ()
	{
		return numQuestions - missed;
	}
	double getPointForEach ()
	{
		return pointForEach;
	}
	double getMinPassingScore ()
	{
		return minPassScore;
	}
};
#endif
