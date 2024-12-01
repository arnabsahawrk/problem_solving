#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string ss;
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
                ss.push_back(tolower(s[i]));
        }

        for (int i = 0, j = ss.size() - 1; i < j; i++, j--)
        {
            if (ss[i] != ss[j])
                return false;
        }

        return true;
    }
};