#include "stdafx.h"
#include "Account.h"



using namespace std;

//default contsstructur
Account::Account()
{

}

//set details method which takes an account number and balance
void Account::setDetails(int * accNo, double  * bal)
{
	this->balance = *bal;
	this->accountNo = *accNo;
}

//Credit method to add an amount to the current balance
bool Account::credit(double * in)
{
	if (in > 0)
	{
		this->balance += *in;
		return true;
	}

	return false;

}

//Debit method to remove an amount from the balance
bool Account::debit(double * in)
{
	if (in > 0)
	{
		this->balance -= *in;
		return true;
	}
	return false;
}

//Returns a string that contains the Account number and balance
string Account::getDetails() 
{
	ostringstream conAcc, conBal;
	conAcc << accountNo;
	string toRet;
	toRet += "Account No: ";
	toRet += conAcc.str();
	toRet += " Balance : ";
	conBal << balance;
	toRet += conBal.str();
	return toRet;
}

//Return the account number
int Account::getAccNo()
{
	return accountNo;
}

//return the balance
double Account::getBalance()
{
	return balance;
}

//Deconstructor
Account::~Account() {
	// TODO Auto-generated destructor stub
}