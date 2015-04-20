#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "stdafx.h"
#include "Account.h"

class Account
{
	public:
		Account(); //CTOR
		std::string getFirstName();
		std::string getLastName();
		int getBirthday();
		std::string getEmail();
		std::string getPassword();
		int getRecoveryQuestion();
		int getRecoveryAnswer();
		std::string setFirstName(std::string);
		std::string setLastName(std::string);
		int setBirthday(std::string);
		void setEmail(std::string);
		void setPassword(std::string);
		void setRecoveryQuestion(std::string);
		void setRecoveryAnswer(std::string);

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