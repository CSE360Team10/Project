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
		std::vector<std::string> getMedConditions();
		int setWeight(int);
		int setHeight(int);
		std::vector<std::string> setMedConditions(std::queue<std::string>);
		std::vector<SurveyResults> setResponses(int*, std::string);
		SurveyResults takeSurvey();
		std::vector<SurveyResults> getResults();

	private:
		float weight;
		float height;
		std::vector<std::string> medConditions;
		std::vector<SurveyResults> responses;
};

#endif  