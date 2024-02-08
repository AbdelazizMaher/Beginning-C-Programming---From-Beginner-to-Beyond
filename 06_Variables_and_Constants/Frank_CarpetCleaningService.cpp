#include<iostream>


int main()
{
    std::cout << "Hello, Welcome To Frank's Carpet Cleaning Service\n" << std::endl;

    int NsmallRooms {0};
    std::cout << "How many small rooms would you like cleaned? " ;
    std::cin >> NsmallRooms;

    int NlargeRooms {0};
    std::cout << "How many large rooms would you like cleaned? " ;
    std::cin >> NlargeRooms;

    std::cout << "Estimates for carpet cleaning service" << std::endl;

    std::cout << "Number of small rooms: " << NsmallRooms << std::endl;
    std::cout << "Number of large rooms: " << NlargeRooms << std::endl;

    const double smallRoomCharge {25.0};
    std::cout << "Price per small room: $" << smallRoomCharge << std::endl;

    const double largeRoomCharge {35.0};
    std::cout << "Price per large room: $" << largeRoomCharge << std::endl;

    double Cost = ( (NsmallRooms * smallRoomCharge) + (NlargeRooms * largeRoomCharge) );
    std::cout << "Cost: $" << Cost << std::endl;

    const double SalesTax {0.06};
    const int ExpiryDate {30}; // Days

    double Tax =  ( Cost * SalesTax );
    std::cout << "Tax: $" << Tax << std::endl;

    std::cout << "=======================================" << std::endl;

    double TotalEstimate = ( Cost + Tax ) ;
    std::cout << "Total Estimate: $" << TotalEstimate << std::endl;
    std::cout << "This Estimate is valid for: "<< ExpiryDate << " Days" << std::endl;

    return 0;
}


