#pragma once

#include "Account.hpp"

class Checking_Account: public Account {
private:
    static constexpr const char *def_name  = "Unnamed Checking_Account";
    static constexpr double def_balance = 0.0;
    static constexpr double per_check_fee = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual ~Checking_Account() = default;
};