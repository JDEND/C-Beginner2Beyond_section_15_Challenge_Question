#ifndef TRUST_H
#define TRUST_H
#include "Savings_Account.h"

class Trust_account : public Account
{
public:
	bool withdraw(double amount);
	bool deposit(double amount);

	Trust_account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);

protected:
	double int_rate;
	int withdrawl_to_date;
private:
	const double bonus = 50.00;
	static constexpr const char* def_name = "Unnamed Savings Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	
};


#endif // !TRUST_H


