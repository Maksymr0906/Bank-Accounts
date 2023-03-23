#include "Account_Util.hpp"

//Utilities for Account

void display(const std::vector<Account> &accounts) {
    std::cout << "\n===== Accounts ==========" << std::endl;
    for(const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n===== Depositing to Accounts ==========" << std::endl;
    for(auto &acc:accounts) {
        if(acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        }
        else std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n===== Withdrawing from Accounts ==========" << std::endl;
    for(auto &acc: accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        }
        else std::cout << "Failed Witdrawal of "<< amount << " from " << acc << std::endl;
    }
}

//Utiities for Savings_Account

void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n===== Savings_Account ==========" << std::endl;
    for(const auto &acc: accounts) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n===== Depositing to Savings_Accounts ==========" << std::endl;
    for(auto &acc:accounts) {
        if(acc.deposit(amount)) {
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        }
        else std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n===== Withdrawing from Savings_Accounts ==========" << std::endl;
    for(auto &acc: accounts) {
        if(acc.withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        }
        else std::cout << "Failed Witdrawal of "<< amount << " from " << acc << std::endl;
    }
}