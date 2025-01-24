#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        priority_queue<int, vector<int>, greater<int>> pq;

        while (!lists.empty())
        {
            ListNode *ll = lists.back();
            lists.pop_back();

            while (ll)
            {
                pq.push(ll->val);
                ll = ll->next;
            }
        }

        if (!pq.empty())
        {
            ListNode *newList = new ListNode(pq.top());
            pq.pop();
            ListNode *temp = newList;

            while (!pq.empty())
            {
                temp->next = new ListNode(pq.top());
                temp = temp->next;
                pq.pop();
            }

            return newList;
        }
        else
            return nullptr;
    }
};