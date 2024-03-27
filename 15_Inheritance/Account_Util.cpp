#include <iostream>
#include "Account_Util.h"

// Displays Account objects in a  vector of Account objects
void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ==========================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Accounts =================================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ==============================" <<std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}


// Helper functions for Savings Account class

// Displays Savings Account objects in a  vector of Savings Account objects
void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ====================================" << std::endl;
    for (const auto &acc: accounts)
        std::cout << acc << std::endl;
}

// Deposits supplied amount to each Savings Account object in the vector
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Depositing to Savings Accounts ==========================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.deposit(amount))
            std::cout << "Deposited " << amount << " to " << acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
    }
}

// Withdraw supplied amount from each Savings Account object in the vector
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Savings Accounts ======================" << std::endl;
    for (auto &acc:accounts)  {
        if (acc.withdraw(amount))
            std::cout << "Withdrew " << amount << " from " << acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << acc << std::endl;
    }
}

// Utility helper functions for Checking Account class
void display(const std::vector<Checking_Account> &accounts)
{
    std::cout << "\n=== Checkings Accounts ====================================" << std::endl;
    for(const auto &display_acc : accounts )
        std::cout << display_acc << std::endl;
}

void deposit(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing to Checkings Accounts ==========================" << std::endl;
    for(auto &deposit_acc : accounts)
    {
        if( deposit_acc.deposit(amount) )
            std::cout << "Deposited " << amount << " to " << deposit_acc << std::endl;
        else
           std::cout << "Failed Deposit of " << amount << " to " << deposit_acc << std::endl;
    }
}

void withdraw(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Checkings Accounts ==========================" << std::endl;
    for(auto &withdraw_acc : accounts)
    {
        if( withdraw_acc.deposit(amount) )
            std::cout << "Withdraw " << amount << " from " << withdraw_acc << std::endl;
        else
           std::cout << "Failed Withdrawal of " << amount << " from " << withdraw_acc << std::endl;
    }
}

// Utility helper functions for Trust Account class
void display(const std::vector<Trust_Account> &accounts)
{
    std::cout << "\n=== Trusts Accounts ====================================" << std::endl;
    for(const auto &display_acc : accounts )
        std::cout << display_acc << std::endl;
}

void deposit(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n=== Depositing to Trusts Accounts ==========================" << std::endl;
    for(auto &deposit_acc : accounts)
    {
        if( deposit_acc.deposit(amount) )
            std::cout << "Deposited " << amount << " to " << deposit_acc << std::endl;
        else
           std::cout << "Failed Deposit of " << amount << " to " << deposit_acc << std::endl;
    }
}

void withdraw(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n=== Withdrawing from Trusts Accounts ==========================" << std::endl;
    for(auto &withdraw_acc : accounts)
    {
        if( withdraw_acc.deposit(amount) )
            std::cout << "Withdraw " << amount << " from " << withdraw_acc << std::endl;
        else
           std::cout << "Failed Withdrawal of " << amount << " from " << withdraw_acc << std::endl;
    }
}
