#include "Checking_Account.hpp"

Checking_Account::Checking_Account(std::string name, double balance)
:Account(name, balance) {
}

bool Checking_Account::withdraw(double amount) {
    return Account::withdraw(amount + per_check_fee);
}

bool Checking_Account::deposit(double amount) {
    return Account::deposit(amount);
}