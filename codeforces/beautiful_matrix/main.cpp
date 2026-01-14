#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    int rows = 5, cols = 5;
    int moves = 0;
    int value;

    std::vector<int> center {2, 2};
    std::vector<std::vector<int>> matrix;

    for (int r = 0; r < rows; r++)
    {
        matrix.push_back({});
        for (int c = 0; c < cols; c++)
        {
            std::cin >> value;
            if (value == 1)
            {
                matrix[r].push_back(1);
                moves += abs(center[0] - r) + abs(center[1] - c);
            }
            else
            {
                matrix[r].push_back(0);
            }
        }
    }

    // std::cout << matrix.size() << std::endl;
    // std::cout << matrix[0].size() << std::endl;

    // for (int i = 0; i < matrix.size(); i++)
    // {
    //     for (int n = 0; n < matrix[i].size(); n++)
    //         std::cout << matrix[i][n] << " ";
    //     std::cout << std::endl;
    // }

    std::cout << moves << std::endl;

    return 0;
}