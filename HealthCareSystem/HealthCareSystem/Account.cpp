// Account.cpp : Defines the account class, whose children are Doctor and Patient.
//

#include "Account.h"

std::string Account::getFirstName() { return firstName; }

std::string Account::getLastName() { return lastName; }

std::string Account::getBirthday() { return birthday; }

std::string Account::getEmail() { return email; }

std::string Account::getPassword() { return password; }

int Account::getRecoveryQuestion() { return recoveryQuestion; }

int Account::getRecoveryAnswer() { return recoveryAnswer; }

void Account::setFirstName(std::string newFirstName) { firstName = newFirstName; }

void Account::setLastName(std::string newLastName) { lastName = newLastName; }

void Account::setBirthday(std::string newBirthday) { birthday = newBirthday; }

void Account::setEmail(std::string newEmail) { email = newEmail; }

void Account::setPassword(std::string newPassword) { password = newPassword; }

void Account::setRecoveryQuestion(int newRecoveryQuestion) { recoveryQuestion = newRecoveryQuestion; }

void Account::setRecoveryAnswer(int newRecoveryAnswer) { recoveryAnswer = newRecoveryAnswer; }