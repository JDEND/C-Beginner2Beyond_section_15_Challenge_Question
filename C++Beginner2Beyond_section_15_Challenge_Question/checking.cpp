#include "checking.h"

bool checking_account::withdraw(double amount) {
	if (balance - amount >= 1.50) {
		balance -= (amount + 1.50);
		return true;
	}
	else
		return false;

};

checking_account::checking_account(std::string name = def_name, double balance = def_balance) : Account{ name, balance } {};