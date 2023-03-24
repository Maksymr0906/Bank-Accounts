#include "Trust_Account.hpp"

int Trust_Account::withdrawal_per_year = 0;

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}

Trust_Account::Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate) 
:Savings_Account(name, balance, int_rate) {
}

bool Trust_Account::deposit(double amount) {
    if(amount > 5000.0) {
        Savings_Account::deposit(amount + 50.0);
    }
    else {
        Savings_Account::deposit(amount);
    }
}

bool Trust_Account::withdraw(double amount) {
    withdrawal_per_year++;

    if(withdrawal_per_year > 3) {           //only 3 withdraws per year
        std::cout << "Error" << std::endl;
        withdrawal_per_year = 0;
    }

    if(amount <= balance * 0.2) {           //less than 20% of account balance
        Savings_Account::withdraw(amount);
    }
}