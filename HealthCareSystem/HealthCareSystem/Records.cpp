#include "Records.h"

Records::Records(){
	//ctor
}

std::vector<Patient> Records::getPatients(){
	return patientRecords;
}


std::vector<Doctor> Records::getDoctors(){
	return doctorRecords;
}

std::vector<SurveyResults> Records::getActiveSurveys(){
	return activeSurveys;
}

bool Records::addPatient(Patient patient){
	patientRecords.push_back(patient);
	return 1;
}

bool Records::addDoctor(Doctor doctor){
	doctorRecords.push_back(doctor);
	return 1;
}

bool Records::addSurvey(SurveyResults survey){
	activeSurveys.push_back(survey);
	return 1;
}

bool Records::removePatient(Patient patient){
	for (int i = 0; i < patientRecords.size(); i++){
		if (patient.getEmail().compare(patientRecords[i].getEmail()) == 0){
			patientRecords.erase[patientRecords.begin() + i];
			return 1;
		}
	}
	return 0;
}

bool Records::removeDoctor(Doctor doctor){
	//todo
	for (int i = 0; i < doctorRecords.size(); i++){
		if (doctor.getEmail().compare(doctorRecords[i].getEmail()) == 0){
			doctorRecords.erase[doctorRecords.begin() + i];
			return 1;
		}
	}
	return 0;
}

bool Records::removeSurvey(SurveyResults survey){
	for (int i = 0; i < activeSurveys.size(); i++){
		if (survey.getDateTaken().compare(activeSurveys[i].getDateTaken()) == 0){
			activeSurveys.erase[activeSurveys.begin() + i];
			return 1;
		}
	}
	return 0;
}

Account Records::search(std::string firstName, std::string lastName){

	for (int i = 0; i < patientRecords.size(); i++){
		if ((firstName.compare(patientRecords[i].getFirstName()) == 0) 
			&& (lastName.compare(patientRecords[i].getLastName()) == 0)){
			return patientRecords[i];
		}
	}
	for (int i = 0; i < doctorRecords.size(); i++){
		if ((firstName.compare(doctorRecords[i].getFirstName()) == 0)
			&& (lastName.compare(doctorRecords[i].getLastName()) == 0)){
			return doctorRecords[i];
		}
	}
	Account foo;
	return foo;
}

Account Records::search(std::string email){
	for (int i = 0; i < patientRecords.size(); i++){
		if ((email.compare(patientRecords[i].getEmail()) == 0)){
			return patientRecords[i];
		}
	}
	for (int i = 0; i < doctorRecords.size(); i++){
		if ((email.compare(doctorRecords[i].getEmail()) == 0)){
			return doctorRecords[i];
		}
	}
	Account foo;
	return foo;
}