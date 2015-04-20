#include "SurveyResults.h"

SurveyResults::SurveyResults(){
	//ctor
}

int * SurveyResults::getQuestionResponses(){
	return questionResponses;
}

std::string SurveyResults::getNotesToDoctor(){
	return notesToDoctor;
}

float SurveyResults::getAverageScore(){
	return averageScore;
}

std::string SurveyResults::getDateTaken(){
	return dateTaken;
}

void SurveyResults::computeAverage(){

}