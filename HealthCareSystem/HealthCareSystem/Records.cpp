#include "Records.h"

Records::Records(){
	//ctor
}

std::queue<Patient> Records::getPatients(){
	return patientRecords;
}


std::queue<Doctor> Records::getDoctors(){
	return doctorRecords;
}

std::queue<SurveyResults> Records::getActiveSurveys(){
	return activeSurveys;
}

bool Records::addPatient(Patient patient){
	//todo
	return 1;
}

bool Records::addDoctor(Doctor doctor){
	//todo
	return 1;
}

bool Records::addSurvey(SurveyResults survey){
	//todo
	return 1;
}

bool Records::removePatient(Patient patient){
	//todo
	return 1;
}

bool Records::removeDoctor(Doctor doctor){
	//todo
	return 1;
}

bool Records::removeSurvey(SurveyResults survey){
	//todo
	return 1;
}

Account search(std::string firstName, std::string lastName){

	Account foo;
	//TODO
	return foo;
}

Account search(std::string fusername){
	Account foo;
	//TODO
	return foo;
}