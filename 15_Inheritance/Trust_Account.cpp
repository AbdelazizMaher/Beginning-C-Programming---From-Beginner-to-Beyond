#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string Given_name, double Given_balance, double Given_int_rate)
    : Savings_Account{Given_name,Given_balance,Given_int_rate} , withdrawal_number{0} {
}

Trust_Account::~Trust_Account()
{
}

bool Trust_Account::deposit(double amount)
{
   amount = ( amount > max_deposit ) ? (amount + deposit_bonus):(amount);
   return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
   if ( withdrawal_number < max_withdrawls || ( amount < (balance *max_withdrawls_percentage) ) )
   {
       withdrawal_number++;
       return Savings_Account::withdraw(amount);
   }
   return false;
}

std::ostream &operator<< (std::ostream &os ,const Trust_Account &trust_account)
{
        os << "[Trust_Account: " << trust_account.name << " : " << trust_account.balance << trust_account.int_rate << "%, withdrawals: " << trust_account.withdrawal_number <<  "]";
        return os;
}
