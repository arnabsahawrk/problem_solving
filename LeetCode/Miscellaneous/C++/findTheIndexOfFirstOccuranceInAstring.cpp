#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int found = haystack.find(needle);

        if (found > haystack.size())
            return -1;
        else
            return found;
    }
};