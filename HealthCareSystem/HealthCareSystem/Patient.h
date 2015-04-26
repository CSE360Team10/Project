#ifndef PATIENT_H
#define PATIENT_H

#include "stdafx.h"
#include "Account.h"
#include "SurveyResults.h"

class Patient: public Account
{
	public:
		Patient(std::string, std::string, std::vector<std::string>); //CTOR
		int getWeight();
		int getHeight();
		int getAge();
		std::vector<std::string> getMedConditions();
		void setWeight(int);
		void setHeight(int);
		void setMedConditions(std::vector<std::string>);
		void setResponses(int*, std::string, std::string);
		std::vector<SurveyResults> getResults();

	private:
		float weight;
		float height;
		std::vector<std::string> medConditions;
		std::vector<SurveyResults> responses;
};

#endif 