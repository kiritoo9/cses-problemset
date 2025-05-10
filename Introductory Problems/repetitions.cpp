#include <iostream>

int main()
{
    std::string w;
    std::cin >> w;

    int cf = 0;
    int c = 0;
    char s = w.at(0);
    for (size_t i = 0; i < w.size(); i++)
    {
        if (s == w[i])
        {
            c++;
        }
        else
        {
            c = 1;
            s = w[i];
        }

        if (cf < c)
            cf = c;
    }

    std::cout << cf;
    return 0;
}