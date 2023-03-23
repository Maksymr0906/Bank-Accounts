#include "Savings_Account.hpp"

Savings_Account::Savings_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate) 
    :Account(name, balance), int_rate{int_rate} {
}
bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    os << "[Saving_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}