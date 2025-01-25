#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isNStraightHand(vector<int> &hand, int groupSize)
    {
        if (hand.size() % groupSize != 0)
            return false;

        map<int, int> cards;
        for (int val : hand)
            cards[val]++;

        while (!cards.empty())
        {
            int card = cards.begin()->first;
            for (int i = card; i < card + groupSize; i++)
            {
                if (cards.find(i) == cards.end())
                    return false;
                cards[i]--;
                if (cards[i] == 0)
                    cards.erase(i);
            }
        }

        return true;
    }
};