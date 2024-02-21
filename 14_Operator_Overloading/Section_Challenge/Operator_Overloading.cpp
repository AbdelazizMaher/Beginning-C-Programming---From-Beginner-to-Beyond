#include "Operator_Overloading.h"


std::ostream &operator<<(std::ostream &os,const Operators &rhs)
{
    os << rhs.STR;

    return os;
}

std::istream &operator>>(std::istream &is,Operators &rhs)
{
    char *NewSTR = new char[1000];
    is >> NewSTR;

    rhs = Operators {NewSTR};
    delete [] NewSTR;

    return is;
}

Operators::Operators()
    : STR {nullptr} {
    STR = new char[1];
    *STR = '\0';
}

Operators::Operators(const char *str)
    : STR {nullptr} {
    if( str == nullptr )
    {
        STR = new char[1];
        *STR = '\0';
    }
    else
    {
        STR = new char[std::strlen(str) + 1];
        std::strcpy(STR,str);
    }
}

Operators::Operators(const Operators &source)
    : Operators{source.STR} {

}

Operators::~Operators()
{
}

Operators &Operators::operator = (const Operators &rhs)
{
    if( this == &rhs )
        return *this;

    delete [] STR;
    STR = new char[std::strlen(rhs.STR) + 1];
    std::strcpy(STR,rhs.STR);

    return *this;
}

Operators &Operators::operator = (Operators &&rhs)
{
    if( this == &rhs )
        return *this;

    delete [] STR;
    STR = rhs.STR;
    rhs.STR = nullptr;

    return *this;
}

Operators Operators::operator - () const
{
    char *NewSTR = new char[std::strlen(STR) + 1];
    std::strcpy(NewSTR,STR);

    for( size_t i = 0 ; i < std::strlen(NewSTR) ; i++ )
        NewSTR[i] = std::tolower(NewSTR[i]);

    Operators temp {NewSTR};
    delete [] NewSTR;

    return temp;
}

Operators &Operators::operator ++ ()
{
    for( size_t i = 0 ; i < std::strlen(STR) ; i++ )
        STR[i] = std::toupper(STR[i]);

    return *this;
}

Operators Operators::operator ++ (int)
{
    Operators temp {*this};

    operator ++ ();

    return temp;
}

bool Operators::operator ! () const
{
    return ( (STR == nullptr) ? true : false );
}

Operators Operators::operator + (const Operators &rhs) const
{
    size_t NewSTRsize = std::strlen(STR) +
                        std::strlen(rhs.STR) + 1;
    char *NewSTR = new char[NewSTRsize];

    std::strcpy(NewSTR,STR);
    std::strcat(NewSTR,rhs.STR);

    Operators temp {NewSTR};
    delete [] NewSTR;

    return temp;
}

bool Operators::operator == (const Operators &rhs) const
{
    return ( std::strcmp(STR,rhs.STR) == 0 );
}

bool Operators::operator != (const Operators &rhs) const
{
    return ( std::strcmp(STR,rhs.STR) != 0 );
}

Operators &Operators::operator += (const Operators &rhs)
{
    // Operators temp = operator + (rhs);
    // operator = (temp);
    *this = *this + rhs;

    return *this;
}

bool Operators::operator < (const Operators &rhs) const
{
    return ( std::strcmp(STR,rhs.STR) < 0 );
}

bool Operators::operator > (const Operators &rhs) const
{
    return ( std::strcmp(STR,rhs.STR) > 0 );
}

Operators Operators::operator * (int rep) const
{
    /*
        Operators temp;
        for(int i = 0 ; i < rep ; i++)
            temp = temp + *this;
    */
    char *NewSTR = new char[(std::strlen(STR) * rep) + 1] {};

    for( int i = 0 ; i < rep ; i++ )
        std::strcat(NewSTR,STR);

    Operators temp {NewSTR};
    delete [] NewSTR;

    return temp;
}

Operators &Operators::operator *= (int rep)
{
    *this = *this * rep;

    return *this;
}
