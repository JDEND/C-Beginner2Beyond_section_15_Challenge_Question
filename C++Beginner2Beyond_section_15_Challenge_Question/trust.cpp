#include "trust.h"

bool Trust_account::deposit(double amount) {
    if (amount >= 5000)
        amount += 50;
    amount += amount * (int_rate / 100);
    return Account::deposit(amount);
}

bool Trust_account::withdraw(double amount) {
   if(amount <= (balance*.2) && withdrawl_to_date < 3)
    if (balance - amount >= 0) {
        balance -= amount;
        withdrawl_to_date++;
        return true;
    }
    else
        return false;
}

Trust_account::Trust_account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate) : Account{ name, balance }, int_rate{ int_rate }, withdrawl_to_date{ 0 } {};