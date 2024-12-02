// LetterCombinationOfPhoneNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>
#include <vector>

const std::map<int, std::string> DIGITS{ {2, "abc"},
    {3, "def"},
    {4, "ghi"},
    {5, "jkl"},
    {6, "mno"},
    {7, "pqrs"},
    {8, "tuv"},
    {9, "wxyz"} };

void LetterBombination(const std::string& digits, size_t index, std::string& s, std::vector<std::string>& result)
{
    if (index == digits.size())
    {
        result.push_back(s);
        return;
    }

    int n = digits[index] - '0';
    if (n > 9 || n < 2)
        throw std::runtime_error("Invalid phone number!");

    if (n != 0 && n != 1)
    {
        for (auto c : DIGITS.at(n))
        {
            s.push_back(c);
            LetterBombination(digits, index+1, s, result);
            s.pop_back();
        }
    }
}

std::vector<std::string> LetterBombinations(std::string& digits)
{
    std::string s;
    std::vector<std::string> result;

    LetterBombination(digits, 0, s, result);
    return result;
}

int main()
{
    while (true)
    {
        std::cout << "Please enter a phone number (\"0\" to exit): ";
        std::string digits;
        std::cin >> digits;

        std::vector<std::string> result = LetterBombinations(digits);
        std::cout << "There are " << result.size() << " combinations: " << std::endl;
        int i = 0;
        for (auto& s : result)
        {
            if (i++ % 5 == 0)
                std::cout << std::endl;
            else std::cout << "   ";

            std::cout << s;
        }
    }
}
