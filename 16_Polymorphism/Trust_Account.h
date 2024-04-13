#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account : public Savings_Account
{
private:
    static constexpr const char *def_name = "Unnamed Checkings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double deposit_bonus = 50.00;
    static constexpr double max_deposit = 5000.00;
    static constexpr double max_withdrawls = 3;
    static constexpr double max_withdrawls_percentage = 0.2;
protected:
    int withdrawal_number;
public:
    Trust_Account(std::string Given_name = def_name , double Given_balance = def_balance, double Given_int_rate = def_int_rate);
    virtual ~Trust_Account() = default;

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount)override;
    virtual void print(std::ostream &os) const override;

};





#endif /* _TRUST_ACCOUNT_H_ */
