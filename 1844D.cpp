#include <iostream>
#include <vector>
#include <set>

std::set<int> calculateFactors(int number)
{
    std::set<int> factorSet;
    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            factorSet.insert(i);
            factorSet.insert(number / i);
        }
    }
    return factorSet;
}

int main()
{
    int numTestCases;
    std::cin >> numTestCases;

    while (numTestCases-- > 0)
    {
        int inputNumber;
        std::cin >> inputNumber;
        std::set<int> factors = calculateFactors(inputNumber);
        std::vector<std::vector<int>> grid(inputNumber, std::vector<int>(26));
        std::vector<int> values(inputNumber);
        std::string resultString;

        for (int i = 0; i < inputNumber; i++)
        {
            for (int factor : factors)
            {
                if (i + factor >= inputNumber)
                    break;
                grid[i + factor][values[i]] = 1;
            }
            if (i + 1 < inputNumber)
            {
                for (int j = 0; j < 26; j++)
                {
                    if (grid[i + 1][j] == 0)
                    {
                        values[i + 1] = j;
                        break;
                    }
                }
            }
        }
        for (int value : values)
        {
            char c = value + 'a';
            resultString += c;
        }
        resultString += "\n";
        std::cout << resultString;
    }

    return 0;
}