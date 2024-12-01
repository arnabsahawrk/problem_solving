#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        stringstream ss(s);
        string word;
        int count;

        while (ss >> word)
        {
            count = word.size();
        }

        return count;
    }
};