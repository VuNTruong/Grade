#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H
#include <string>

using namespace std;

class GradedActivity
{
	private:
		double score;
		
	public:
		// Default constructor
		GradedActivity ()
		{
			score = 0.0;
		}
		GradedActivity (double sco)
		{
			score = sco;
		}
		void setScore (double sc)
		{
			score = sc;
		}
		
		double getScore ()
		{
			return score;
		}
		string getLetterGrade ()
		{
			if (score >= 90)
			{
				return "A";
			}
			else if ((score >= 80) && (score < 90))
			{
				return "B";
			}
			else if ((score >= 70) && (score < 80))
			{
				return "C";
			}
			else if ((score >= 60) && (score < 70))
			{
				return "D";
			}
			else
			{
				return "F";
			}
		}
};
#endif
