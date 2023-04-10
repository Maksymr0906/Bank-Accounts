#include "Trust_Account.hpp"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate) 
:Savings_Account(name, balance, int_rate), withdrawal_per_year{0} {
}

bool Trust_Account::deposit(double amount) {
    if(amount >= bonus_threshold)
        amount += bonus_amount;
    
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
    if(withdrawal_per_year >= max_withdrawals_per_year || (amount > balance * max_withdrawal_percent)) {
        return false;    
    }
    else {
        withdrawal_per_year++;
        return Savings_Account::withdraw(amount);
    }
}