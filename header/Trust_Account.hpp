#pragma once

#include "Savings_Account.hpp"

class Trust_Account: public Savings_Account {
private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double bonus_threshold = 5000.0;
    static constexpr double max_withdrawal_percent = 0.20;
    static constexpr int max_withdrawals_per_year = 3;
protected:
    int withdrawal_per_year;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual ~Trust_Account() = default;
};

