#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

#include<iostream>

class I_Printable
{
    friend std::ostream &operator <<(std::ostream &os ,const I_Printable &printable);
private:
public:
    virtual ~I_Printable() = default;
    virtual void print(std::ostream &os) const = 0;

};
#endif /* _I_PRINTABLE_H_ */
