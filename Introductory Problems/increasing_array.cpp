#include <iostream>
#include <vector>
#include <sstream>

void solve(const long long n, std::vector<long long> &numbers)
{
    long long m = 0;
    long long l = 0;
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i] < numbers[i - 1])
        {
            l = numbers[i - 1] - numbers[i];
            numbers[i] = numbers[i] + l;
            m += l;
        }
    }
    std::cout << m;
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