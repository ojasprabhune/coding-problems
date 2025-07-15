#include <iostream>

int main()
{
    int m, n;
    int dominoes;
    std::cin >> m >> n;

    dominoes = (m * n) / 2;

    std::cout << dominoes << std::endl;

    return 0;
}