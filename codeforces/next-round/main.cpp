#include <iostream>
#include <vector>

int main()
{
    int n, k;
    int score;
    std::vector<int> scores;
    int advanced = 0;

    std::cin >> n >> k;
    
    for (int n1 = n; n1 > 0; n1--)
    {
        std::cin >> score;
        scores.push_back(score);
    }

    for (int n2 = n - 1; n2 >= 0; n2--)
    {
        if (scores[n2] >= scores[k - 1] && scores[n2] > 0)
        {
            advanced++;
        }
    }

    std::cout << advanced << std::endl;

    return 0;
}