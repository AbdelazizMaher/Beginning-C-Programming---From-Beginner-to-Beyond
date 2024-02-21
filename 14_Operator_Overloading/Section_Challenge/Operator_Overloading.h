#ifndef _OPERATOR_OVERLOADING_H_
#define _OPERATOR_OVERLOADING_H_

#include <iostream>
#include <Cstring>

class Operators
{
    friend std::ostream &operator << (std::ostream &os,const Operators &rhs);
    friend std::istream &operator >> (std::istream &is,Operators &rhs);
private:
    char *STR;
public:
    Operators &operator = (const Operators &rhs);   // Copy assignment operator
    Operators &operator = (Operators &&rhs);        // move assignment operator
    // Unary operators
    Operators operator - () const;     // Make Lowercase
    Operators &operator ++ ();         //Pre-Increment -> Make Uppercase
    Operators operator ++ (int);       //Post-Increment -> Make Uppercase
    bool operator ! () const;
    // Binary operators
    Operators operator + (const Operators &rhs) const;          // Concatenate
    bool operator == (const Operators &rhs) const;              // Equals
    bool operator != (const Operators &rhs) const;              // Not Equals
    Operators &operator += (const Operators &rhs);              // Concatenate and assign
    bool operator < (const Operators &rhs) const;               // Greater than
    bool operator > (const Operators &rhs) const;               // Less than
    Operators operator * (int rep) const;                       // Repeat
    Operators &operator *= (int rep);                           // Repeat and assign
    // Constuctors
    Operators();
    Operators(const char *str);
    Operators(const Operators &source);
    ~Operators();
    // Getters
    int GetLength() const { return std::strlen(STR); }
    char *GetSTR() const { return STR; }
    //Display
    void Display() const { std::cout << STR << ": " << GetLength() << std::endl;}
};






#endif /* _OPERATOR_OVERLOADING_H_ */
