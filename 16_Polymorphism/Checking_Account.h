#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class Checking_Account : public Account
{
private:
    static constexpr const char *def_name = "Unnamed Checkings Account";
    static constexpr double def_balance = 0.0;
protected:
    static constexpr double withdrawl_fee = 1.50;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual ~Checking_Account() = default;

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
};




#endif /* _CHECKING_ACCOUNT_H_ */
