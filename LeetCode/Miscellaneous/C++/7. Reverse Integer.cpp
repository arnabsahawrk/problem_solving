#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;

        while (x != 0)
        {
            int remainder = x % 10;

            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && remainder > 7))
                return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && remainder < -8))
                return 0;

            rev = (rev * 10) + remainder;

            x /= 10;
        }

        return rev;
    }
};