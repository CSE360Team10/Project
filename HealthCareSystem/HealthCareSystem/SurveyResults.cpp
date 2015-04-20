#include "SurveyResults.h"

SurveyResults::SurveyResults(int qResponses[numOfQuestions], std::string notes, std::string date){
	for (int i = 0; i < numOfQuestions; i++){
		questionResponses[i] = qResponses[i];
	}
	notesToDoctor = notes;
	dateTaken = date;
	computeAverage();
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
	averageScore = 0;
	for (int i = 0; i < numOfQuestions; i++){
		averageScore += questionResponses[i];
	}
	averageScore /= (float)numOfQuestions;
}