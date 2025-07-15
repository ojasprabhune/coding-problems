#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;

    std::cin >> str1;
    std::cin >> str2;
    
    if (str1 < str2) {
        std::cout << -1 << std::endl;
    } else if (str2 < str1) {
        std::cout << 1 << std::endl;
    } else if (str1 == str2) {
        std::cout << 0 << std::endl;
    }

    return 0;
}