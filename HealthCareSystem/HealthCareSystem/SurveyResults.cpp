#include "SurveyResults.h"



SurveyResults::SurveyResults(){
	//CTOR
}

std::queue<Patient> SurveyResults::getPatients(){
	return patientRecords;
}


std::queue<Doctor> SurveyResults::getDoctors(){
	return doctorRecords;
}

std::queue<SurveyResults> SurveyResults::getActiveSurveys(){
	return activeSurveys;
}

bool SurveyResults::addPatient(Patient patient){
	//todo
	return 1;
}

bool SurveyResults::addPatient(Doctor doctor){
	//todo
	return 1;
}

bool SurveyResults::addSurvey(SurveyResults survey){
	//todo
	return 1;
}

bool SurveyResults::removePatient(Patient patient){
	//todo
	return 1;
}

bool SurveyResults::removePatient(Doctor doctor){
	//todo
	return 1;
}

bool SurveyResults::removeSurvey(SurveyResults survey){
	//todo
	return 1;
}

Account search(std::string firstName, std::string lastName){
	//TODO
	return NULL;
}

Account search(std::string fusername){
	//TODO
	return NULL;
}