#include <iostream>
#include <vector>
#include "Account.hpp"
#include "Trust_Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Account_Util.hpp"

using namespace std;

int main() {
    try {
        Savings_Account acc("Account", -12, 0.1);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }

    try {
        Savings_Account acc("Account_2", 100, 0.1);
        std::cout << acc << std::endl;
        acc.deposit(400);
        std::cout << acc << std::endl;
        acc.withdraw(600);
    }
    catch(const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    
    
}