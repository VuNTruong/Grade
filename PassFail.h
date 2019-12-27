#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H
#include "GradedActivity.h"
#include <string>

using namespace std;

class passFailActivity : public GradedActivity
{
	protected:
		double minPassScore;
		
	public:
		// Default constructor
		passFailActivity () : GradedActivity ()
		{
			minPassScore = 0.0;	
		}		
		// Constructor
		passFailActivity (double mps) : GradedActivity ()
		{
			minPassScore = mps;
		}
		// set min passing score 
		void setMPS (double mps)
		{
			minPassScore = mps;
		}
		// get min passing score 
		double getMPS (double mps)
		{
			return minPassScore;
		}
		// Get letter grade
		string getLetterGrade ()
		{
			if (getScore() >= minPassScore)
			{
				return "P";	
			}	
			else
			{
				return "F";
			}
		}
};
#endif
