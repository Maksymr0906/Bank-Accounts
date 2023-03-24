#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name = def_name, double balance = def_balance)
:Account(name, balance) {
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}

bool Checking_Account::withdraw(double amount) {
    Account::withdraw(amount + 1.50);
}