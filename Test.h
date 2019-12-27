#ifndef PASSFAILEXAM_H 
#define PASSFAILEXAM_H 
#include "PassFail.h"

class passFailExam : public PassFail
{
	private:
		double testScore;
		
	public:
		// get passing score
		double getPassScore ()
		{
			return minPassScore;
		}
};
#endif
