#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Trust_Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Account_Util.hpp"

using namespace std;

int main() {
    vector<Account *> accounts{};
    Account *acc = new Savings_Account("Maks", 1000);
    accounts.push_back(acc);
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);
}