#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, a, b;
        std::cin >> n >> a >> b;
        std::vector<int> p;
        p.push_back(a);
        for (int j = n; j > 0; --j)
        {
            if (j != a && j != b)
            {
                p.push_back(j);
            }
        }
        p.push_back(b);
        if (p.size() == n && *std::min_element(p.begin(), p.begin() + n / 2) == a && *std::max_element(p.begin() + n / 2, p.end()) == b)
        {
            for (int num : p)
            {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
        else
        {
            std::cout << -1 << std::endl;
        }
    }
    return 0;
}