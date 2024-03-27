#include "Checking_Account.h"


Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name,balance} {

}

Checking_Account::~Checking_Account()
{
}

bool Checking_Account::withdraw(double amount)
{
    amount += withdrawl_fee;
    return Account::withdraw(amount);
}

std::ostream &operator<< (std::ostream &os ,const Checking_Account &checking_account)
{
    os << "[Checking_Account: " << checking_account.name << ": " << checking_account.balance << "]";
    return os;
}
