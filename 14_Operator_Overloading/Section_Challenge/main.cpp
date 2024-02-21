#include <iostream>
#include "Operator_Overloading.h"


int main()
{
    std::cout << std::boolalpha << std::endl;

    Operators a {"frank"};
    Operators b {"frank"};

    std::cout << ( a == b ) << std::endl;
    std::cout << ( a != b ) << std::endl;

    b = "george";

    std::cout << ( a == b ) << std::endl;
    std::cout << ( a != b ) << std::endl;
    std::cout << ( a < b )  << std::endl;
    std::cout << ( a > b )  << std::endl;

    Operators s1 {"FRANK"};

    s1 = -s1;
    std::cout << s1 << std::endl;
    s1 = s1 + "*****";
    std::cout << s1 << std::endl;
    s1 += "-----";
    std::cout << s1 << std::endl;

    Operators s2 {"12345"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl;

    Operators s3 {"abcdef"};
    s3 *= 5;
    std::cout << s3 << std::endl;

    Operators s = "FRANK";

    ++s;
    std::cout << s << std::endl;
    s = -s;
    std::cout << s << std::endl;

    Operators MyResult;

    MyResult = ++s;
    std::cout << s << std::endl;
    std::cout << MyResult << std::endl;

    s = "Frank";
    s++;
    std::cout << s << std::endl;

    s = -s;
    std::cout << s << std::endl;

    MyResult = s++;
    std::cout << s << std::endl;
    std::cout << MyResult << std::endl;

    return 0;
}

