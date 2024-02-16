#include <iostream>
#include <vector>

int main()
{
    std::vector<int> List {};
    char Opt;

    std::cout << "P - Print Numbers: " << std::endl;
    std::cout << "A - Add a Number:  " << std::endl;
    std::cout << "M - Display mean of the Numbers: " << std::endl;
    std::cout << "S - Display the Smallest Number: " << std::endl;
    std::cout << "P - Display the largest Number: " << std::endl;
    std::cout << "Q - Quit:  " << std::endl;


    while(1)
    {
        std::cout << "\nEnter your choise:  ";
        std::cin >> Opt;

        std::cout << std::endl;
        switch(Opt)
        {
        case 'P':
        case 'p':
            if( List.size() == 0 )
                std::cout << "[] - the list is empty" << std::endl;
            else
            {
                std::cout << "[ ";
                for(auto num : List)
                    std::cout << num << " ";
                std::cout << " ]" << std::endl;    
            }
            break; 
        case 'A':
        case 'a':
            {int TempNum {};
            std::cout << "Enter an integer to add to list:  ";
            std::cin >> TempNum;
            List.push_back(TempNum);
            std::cout << TempNum << " added" << std::endl;        
            break;}
        case 'M':
        case 'm':
            if( List.size() == 0 )
                std::cout << "Unable to calculate the mean - no data" << std::endl;
            else
            {
                int mean {};
                for(auto num : List)
                    mean += num;
                std::cout << "The mean is: " << static_cast<double>(mean/List.size()) << std::endl; 
            }                   
            break; 
        case 'S':
        case 's':
            if( List.size() == 0 )
                std::cout << "Unable to determine the smallest number - List is empty" << std::endl;
            else
            {
                int Min = List.at(0);
                for(auto num : List)
                    Min = ( Min < num ) ? Min:num;
                std::cout << "The smallest number is: " << Min << std::endl; 
            }                   
            break;
        case 'L':
        case 'l':
            if( List.size() == 0 )
                std::cout << "Unable to determine the largest number - List is empty" << std::endl;
            else
            {
                int Max = List.at(0);
                for(auto num : List)
                    Max = ( Max < num ) ? num:Max;
                std::cout << "The largest number is: " << Max << std::endl; 
            }                   
            break;
        case 'Q':
        case 'q':
            std::cout << "Goodbye!! " << std::endl; 
            exit(0);              
            break;
        default:
            std::cout << "Unknown selection please try again " << std::endl;   
            break;                                                                          
        }
    }

    return 0;
}