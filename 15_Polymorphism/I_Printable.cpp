#include "I_Printable.h"


std::ostream &operator <<(std::ostream &os , const I_Printable &printable)
{
    printable.print(os);
    return os;
}
