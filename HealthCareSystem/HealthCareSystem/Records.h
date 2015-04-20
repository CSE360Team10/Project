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
	std::vector<Patient> getPatients();
	std::vector<Doctor> getDoctors();
	std::vector<SurveyResults> getActiveSurveys();
	bool addPatient(Patient);
	bool addDoctor(Doctor);
	bool addSurvey(SurveyResults);
	bool removePatient(Patient);
	bool removeDoctor(Doctor);
	bool removeSurvey(SurveyResults);
	Account search(std::string firstName, std::string lastName);
	Account search(std::string email);
protected:
private:
	std::vector<Patient> patientRecords;
	std::vector<Doctor> doctorRecords;
	std::vector<SurveyResults> activeSurveys;
};



#endif 