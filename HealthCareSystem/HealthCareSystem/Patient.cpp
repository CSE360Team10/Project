// Patient.cpp : Defines the patient class.
//

#include "Patient.h"

Patient::Patient(std::string newFirstName, std::string newLastName, std::vector<std::string> newMedConditions)
{
	//ctor
	setFirstName(newFirstName);
	setLastName(newLastName);
	setMedConditions(newMedConditions);
}

int Patient::getWeight(){ return weight; }

int Patient::getHeight(){ return height; }

int Patient::getAge()
{
	//TODO
	return -1;
}

std::vector<std::string> Patient::getMedConditions(){ return medConditions; }

int Patient::setWeight(int newWeight){ weight = newWeight; }

int Patient::setHeight(int newHeight){ height = newHeight; }

std::vector<std::string> Patient::setMedConditions(std::vector<std::string> newMedConditions){ medConditions = newMedConditions; }

void Patient::setResponses(int* newResponses, std::string newNotes, std::string newDate)
{
	responses.push_back(new SurveyResults(newResponses, newNotes, newDate));
}

std::vector<SurveyResults> Patient::getResults()
{
	return responses;
}