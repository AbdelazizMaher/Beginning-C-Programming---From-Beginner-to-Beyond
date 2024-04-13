#include "Checking_Account.h"


Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name,balance} {

}

bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount)
{
    amount += withdrawl_fee;
    return Account::withdraw(amount);
}

void Checking_Account::print(std::ostream &os) const
{
    os << "[Checking_Account: " << name << ": " << balance  << "]";
}
