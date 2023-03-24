#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name, double balance)
:Account(name, balance) {
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking_Account: " << account.name << ": " << account.balance << "]";
    return os;
}

bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount + per_check_fee);
}