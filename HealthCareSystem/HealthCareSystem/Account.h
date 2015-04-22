#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "stdafx.h"

class Account
{
	public:
		Account(); //CTOR
		std::string getFirstName();
		std::string getLastName();
		std::string getBirthday();
		std::string getEmail();
		std::string getPassword();
		int getRecoveryQuestion();
		int getRecoveryAnswer();
		void setFirstName(std::string);
		void setLastName(std::string);
		void setBirthday(std::string);
		void setEmail(std::string);
		void setPassword(std::string);
		void setRecoveryQuestion(int);
		void setRecoveryAnswer(int);

	private:
		std::string firstName;
		std::string lastName;
		std::string birthday;
		std::string email;
		std::string password;
		int recoveryQuestion;
		int recoveryAnswer;
};

#endif 