#pragma once

#include "Account.hpp"

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
    static constexpr const char *def_name  = "Unnamed Checking_Account";
    static constexpr double def_balance = 0.0;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);
};