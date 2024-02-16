#include <iostream>
#include <string>

int main()
{
    std::string Alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string Key      {"XZCVBNMLKJHGFDSAQWERTYUIOPxzcvbnmlkjhgfdsaqwertyuiop"};
    std::string Message  {};

    std::cout << "Enter your secret message:  ";
    std::getline(std::cin,Message);

    std::cout << "\nEncrypting message...  " << std::endl;
    std::string EncryptedMessage {};

    for( auto element : Message )
    {
        size_t position = Alphabet.find(element);

        if( std::string::npos == position)
            EncryptedMessage += element;
        else
            EncryptedMessage += Key.at(position);
    }
    std::cout << "\nEncrypted message:  " << EncryptedMessage << std::endl;

    std::cout << "\nDecrypting message...  " << std::endl;
    std::string DecryptedMessage {};

    for( auto element : EncryptedMessage )
    {
        size_t position = Key.find(element);

        if( std::string::npos == position)
            DecryptedMessage += element;
        else
            DecryptedMessage += Alphabet.at(position);
    }
    std::cout << "\nDecrypted message:  " << DecryptedMessage << std::endl;

    return 0;
}
