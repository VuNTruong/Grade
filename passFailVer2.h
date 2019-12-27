#ifndef PASSFAILACTIVITYVER2_H
#define PASSFAILACTIVITYVER2_H
#include "GradedActivity.h"
#include <string>

using namespace std;

class passFailActivityVer2 : public GradedActivity
{
	protected:
		double minPassScore;
		
	public:
		// Default constructor
		passFailActivityVer2 () : GradedActivity ()
		{
			minPassScore = 0.0;	
		}		
		// Constructor
		passFailActivityVer2 (double mps, double sco) : GradedActivity (sco)
		{
			setScore (sco);
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
		virtual string getLetterGrade ()
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
