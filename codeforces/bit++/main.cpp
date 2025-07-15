#include <iostream>
#include <string>
    
int main()
{
    int n;
    std::cin >> n;
    int x;
    
    for (; n > 0; n--)
    {
        std::string input;
        std::string add = "++";
        std::string sub = "--";
        std::cin >> input;
        if (input.find(add) != std::string::npos)
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    
    std::cout << x << std::endl;
    
    return 0;
}