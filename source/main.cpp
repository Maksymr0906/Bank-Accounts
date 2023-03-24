#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Trust_Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Account_Util.hpp"

using namespace std;

int main() {
    vector<Account> accounts{};
    accounts.push_back(Account{});
    accounts.push_back(Account{"Maks"});
    accounts.push_back(Account{"Ben", 200});
    accounts.push_back(Account{"Neitan", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);


    vector<Savings_Account> savings_accounts{};
    savings_accounts.push_back(Savings_Account{});
    savings_accounts.push_back(Savings_Account{"Alex"});
    savings_accounts.push_back(Savings_Account{"Joe", 2000});
    savings_accounts.push_back(Savings_Account{"Vito", 5000, 3.0});

    display(savings_accounts);
    deposit(savings_accounts, 1000);
    withdraw(savings_accounts, 2000);


    vector<Checking_Account> checking_accounts{};
    checking_accounts.push_back(Checking_Account{});
    checking_accounts.push_back(Checking_Account{"Nana"});
    checking_accounts.push_back(Checking_Account{"Elizabeth", 4000});
    checking_accounts.push_back(Checking_Account{"Mary", 3000});

    display(checking_accounts);
    deposit(checking_accounts, 1000);
    withdraw(checking_accounts, 2000);


    vector<Trust_Account> trust_accounts{};
    trust_accounts.push_back(Trust_Account{});
    trust_accounts.push_back(Trust_Account{"Moe"});
    trust_accounts.push_back(Trust_Account{"Curly", 10000});
    trust_accounts.push_back(Trust_Account{"Mark", 2500, 12.0});

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 1000);
}