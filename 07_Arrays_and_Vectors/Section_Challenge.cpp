#include <iostream>
#include<vector>

int main()
{
    std::vector<int> Vector1 {} , Vector2 {};

    Vector1.push_back(10);
    Vector1.push_back(20);

    std::cout << "====Vector1====" << std::endl;
    std::cout << "Vector1.at(0): " << Vector1.at(0) << std::endl;
    std::cout << "Vector1.at(1): " << Vector1.at(1) << std::endl;
    std::cout << "Vector1.size(): " << Vector1.size() << std::endl;
    std::cout << "===============\n" << std::endl;

    Vector2.push_back(100);
    Vector2.push_back(200);

    std::cout << "====Vector2====" << std::endl;
    std::cout << "Vector2.at(0): " << Vector2.at(0) << std::endl;
    std::cout << "Vector2.at(1): " << Vector2.at(1) << std::endl;
    std::cout << "Vector2.size(): " << Vector2.size() << std::endl;
    std::cout << "===============\n" << std::endl;

    std::vector< std::vector<int> > Vector_2d {};

    Vector_2d.push_back(Vector1);
    Vector_2d.push_back(Vector2);   

    std::cout << "====Vector_2d========" << std::endl;
    std::cout << "Vector_2d.at(0).at(0): " << Vector_2d.at(0).at(0) << std::endl;
    std::cout << "Vector_2d.at(0).at(1): " << Vector_2d.at(0).at(1) << std::endl;    
    std::cout << "Vector_2d.at(1).at(0): " << Vector_2d.at(1).at(0) << std::endl;
    std::cout << "Vector_2d.at(1).at(1): " << Vector_2d.at(1).at(1) << std::endl;    
    std::cout << "Vector_2d.size(): " << Vector_2d.size() << std::endl;
    std::cout << "=====================\n" << std::endl;    

    Vector1.at(0) = 1000;

    std::cout << "====Vector_2d========" << std::endl;
    std::cout << "Vector_2d.at(0).at(0): " << Vector_2d.at(0).at(0) << std::endl;
    std::cout << "Vector_2d.at(0).at(1): " << Vector_2d.at(0).at(1) << std::endl;    
    std::cout << "Vector_2d.at(1).at(0): " << Vector_2d.at(1).at(0) << std::endl;
    std::cout << "Vector_2d.at(1).at(1): " << Vector_2d.at(1).at(1) << std::endl;    
    std::cout << "Vector_2d.size(): " << Vector_2d.size() << std::endl;
    std::cout << "=====================\n" << std::endl; 

    std::cout << "====Vector1====" << std::endl;
    std::cout << "Vector1.at(0): " << Vector1.at(0) << std::endl;
    std::cout << "Vector1.at(1): " << Vector1.at(1) << std::endl;
    std::cout << "Vector1.size(): " << Vector1.size() << std::endl;
    std::cout << "===============\n" << std::endl;    

    return 0;
}