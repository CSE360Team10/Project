#ifndef PATIENT_H
#define PATIENT_H

#include "stdafx.h"
#include "Account.h"
#include "SurveyResults.h"

class Patient: public Account
{
	public:
		Patient(std::string, std::string, int, std::queue<std::string>); //CTOR
		int getWeight();
		int getHeight();
		int getAge();
		std::queue<std::string> getMedConditions();
		int setWeight(int);
		int setHeight(int);
		std::queue<std::string> setMedConditions(std::queue<std::string>);
		std::queue<SurveyResults> setResponses(int*, std::string);
		SurveyResults takeSurvey();
		std::queue<SurveyResults> getResults();

	private:
		float weight;
		float height;
		std::queue<std::string> medConditions;
		std::queue<SurveyResults> responses;
};

#endif 