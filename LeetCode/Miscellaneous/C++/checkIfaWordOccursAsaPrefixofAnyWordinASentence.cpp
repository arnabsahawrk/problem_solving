#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPrefixOfWord(string sentence, string searchWord)
    {
        stringstream words(sentence);
        string word;
        int count = 0;

        while (words >> word)
        {
            count++;
            bool prefix = true;
            for (int i = 0; i < searchWord.size(); i++)
            {
                if (searchWord[i] != word[i])
                {
                    prefix = false;
                    break;
                }
            }

            if (prefix)
                return count;
        }

        return -1;
    }
};