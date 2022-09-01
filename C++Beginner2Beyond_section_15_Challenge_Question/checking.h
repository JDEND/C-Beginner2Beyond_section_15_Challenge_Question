#ifndef CHECKING_H
#define CHECKING_H
#include "Account.h"

class checking_account : public Account {
private:
    static constexpr const char* def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    const double Withdrawl_fee = 1.50;
public:

    bool withdraw(double amount);
    checking_account(std::string name = def_name, double balance = def_balance);
};


#endif // !1
