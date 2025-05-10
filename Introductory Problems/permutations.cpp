#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    long long n;
    std::vector<long long> even;
    std::vector<long long> odd;

    std::cin >> n;

    for (size_t i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    even.insert(even.end(), odd.begin(), odd.end());

    bool no = false;
    for (size_t i = 0; i < even.size(); ++i)
    {
        long long c = std::abs(even[i] - even[i + 1]);
        if ((i + 1) < even.size() && c == 1)
        {
            no = true;
            break;
        }
    }

    if (no)
    {
        std::cout << "NO SOLUTION";
    }
    else
    {
        for (size_t o : even)
        {
            std::cout << o << " ";
        }
    }

    return 0;
}