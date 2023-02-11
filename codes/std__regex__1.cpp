#include <iostream>
#include <regex>

int main()
{
    std::string input{"juLes"};
    std::regex pattern{"jules", std::regex_constants::icase};

    if (std::regex_match(input, pattern))
    {
        std::cout << "Eşleşme bulundu!" << std::endl;
    }
    else
    {
        std::cout << "Eşleşme bulunamadı." << std::endl;
    }

    return 0;
}
