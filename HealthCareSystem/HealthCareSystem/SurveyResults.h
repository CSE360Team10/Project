#ifndef SURVEYRESULTS_H
#define SURVEYRESULTS_H

#include "stdafx.h"

const int numOfQuestions = 9;

class SurveyResults
{
	public:
		SurveyResults(int[numOfQuestions], std::string, std::string);
		int	*getQuestionResponses();
		std::string getNotesToDoctor();
		float getAverageScore();
		std::string getDateTaken();
		void computeAverage();
	protected:
	private:
		int questionResponses[numOfQuestions];
		std::string notesToDoctor;
		float averageScore;
		std::string dateTaken;
};



#endif 