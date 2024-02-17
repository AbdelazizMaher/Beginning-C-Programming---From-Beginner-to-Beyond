#include <iostream>
#include <vector>

void Display_OptionList(void);
char Get_UserChoise(void);
void Print_ListContent(const std::vector<int> &refList);
void Add_Element(std::vector<int> &refList);
void Calculate_Mean(const std::vector<int> &refList);
void Calculate_SmallestNum(const std::vector<int> &refList);
void Calculate_LargestNum(const std::vector<int> &refList);
void Quit_DisplayMenu(void);
int main()
{
    std::vector<int> List {};
    char Opt {};

    Display_OptionList();

    while(1)
    {       
        Opt = Get_UserChoise();
        
        switch(Opt)
        {
        case 'P':
        case 'p':
            Print_ListContent(List);
            break;

        case 'A':
        case 'a':
            Add_Element(List);
            break;

        case 'M':
        case 'm':
            Calculate_Mean(List);                  
            break; 

        case 'S':
        case 's':
            Calculate_SmallestNum(List);                  
            break;

        case 'L':
        case 'l':
            Calculate_LargestNum(List);                  
            break;

        case 'Q':
        case 'q':
            Quit_DisplayMenu(); 
            break;
            
        default:
            std::cout << "Unknown selection please try again " << std::endl;   
            break;                                                                          
        }
    }

    return 0;
}

void Display_OptionList(void)
{
    std::cout << "P - Print Numbers: " << std::endl;
    std::cout << "A - Add a Number:  " << std::endl;
    std::cout << "M - Display mean of the Numbers: " << std::endl;
    std::cout << "S - Display the Smallest Number: " << std::endl;
    std::cout << "P - Display the largest Number: " << std::endl;
    std::cout << "Q - Quit:  " << std::endl;
}

char Get_UserChoise(void)
{
    char choise {};

    std::cout << "\nEnter your choise:  ";
    std::cin >> choise;
    std::cout << std::endl;

    return choise;
}

void Print_ListContent(const std::vector<int> &refList)
{
    if( refList.size() == 0 )
        std::cout << "[] - the list is empty" << std::endl;
    else
    {
        std::cout << "[ ";
        for(auto num : refList)
            std::cout << num << " ";
        std::cout << "]" << std::endl;    
    }
}

void Add_Element(std::vector<int> &refList)
{
    int TempNum {};
    std::cout << "Enter an integer to add to list:  ";
    std::cin >> TempNum;
    refList.push_back(TempNum);
    std::cout << TempNum << " added" << std::endl;        
}

void Calculate_Mean(const std::vector<int> &refList)
{
    if( refList.size() == 0 )
        std::cout << "Unable to calculate the mean - no data" << std::endl;
    else
    {
        int mean {};
        for(auto num : refList)
             mean += num;
        std::cout << "The mean is: " << static_cast<double>(mean/refList.size()) << std::endl; 
    }     
}

void Calculate_SmallestNum(const std::vector<int> &refList)
{
    if( refList.size() == 0 )
        std::cout << "Unable to determine the smallest number - List is empty" << std::endl;
    else
    {
        int Min = refList.at(0);
        for(auto num : refList)
            Min = ( Min < num ) ? Min:num;
        std::cout << "The smallest number is: " << Min << std::endl; 
    }     
}
void Calculate_LargestNum(const std::vector<int> &refList)
{
    if( refList.size() == 0 )
        std::cout << "Unable to determine the largest number - List is empty" << std::endl;
    else
    {
        int Max = refList.at(0);
        for(auto num : refList)
            Max = ( Max < num ) ? num:Max;
        std::cout << "The largest number is: " << Max << std::endl; 
    }  
}

void Quit_DisplayMenu(void)
{
    std::cout << "Goodbye!! " << std::endl; 
    exit(0); 
}