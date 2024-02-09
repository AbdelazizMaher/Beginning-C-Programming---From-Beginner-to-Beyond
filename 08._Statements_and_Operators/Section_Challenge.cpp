#include <iostream>


int main()
{
    int Amount {0};

    std::cout << "Enter an amount in Cents: ";
    std::cin >> Amount;

    std::cout << "\n\nYou can provide this change as follows: " << std::endl;

    std::cout << "Dollars: "  <<       Amount/100              << std::endl;
    std::cout << "Quarters: " <<      (Amount%100)/25          << std::endl;
    std::cout << "Dimes: "    <<    ( (Amount%100)%25 )/10     << std::endl;
    std::cout << "Nickles: "  <<  (((Amount%100) %25) %10) /5  << std::endl;
    std::cout << "Pennies: "  << ((((Amount%100) %25) %10) %5) << std::endl;

    return 0;
}