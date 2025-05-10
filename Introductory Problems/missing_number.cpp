#include <iostream>
#include <vector>
#include <sstream>

void solve(const long long n, const std::vector<long long> &numbers)
{
    long long e = n * (n + 1) / 2;
    long long a = 0;
    for (int num : numbers)
    {
        a += num;
    }
    std::cout << e - a;
}

int main()
{
    long long n;
    std::cin >> n;
    std::cin.ignore();

    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    std::vector<long long> numbers;
    long long num;

    while (ss >> num)
    {
        numbers.push_back(num);
    }

    solve(n, numbers);
    return 0;
}