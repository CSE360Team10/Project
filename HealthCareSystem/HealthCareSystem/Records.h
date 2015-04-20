#ifndef RECORDS_H
#define RECORDS_H

#include "stdafx.h"
#include "Doctor.h"
#include "Patient.h"
#include "Account.h"
#include "SurveyResults.h"

class Records
{
public:
	Records(); //CTOR
	std::queue<Patient> getPatients();
	std::queue<Doctor> getDoctors();
	std::queue<SurveyResults> getActiveSurveys();
	bool addPatient(Patient);
	bool addDoctor(Doctor);
	bool addSurvey(SurveyResults);
	bool removePatient(Patient);
	bool removeDoctor(Doctor);
	bool removeSurvey(SurveyResults);
	Account search(std::string firstName, std::string lastName);
	Account search(std::string username);
protected:
private:
	std::queue<Patient> patientRecords;
	std::queue<Doctor> doctorRecords;
	std::queue<SurveyResults> activeSurveys;
};



#endif 