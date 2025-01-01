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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == nullptr || head->next == nullptr || k == 0)
        {
            return head;
        }

        ListNode *tail = head;
        int len = 1;

        while (tail->next != nullptr)
        {
            tail = tail->next;
            len++;
        }

        if (k % len == 0)
            return head;

        tail->next = head;

        k = k % len;
        int end = len - k;

        while (end--)
            tail = tail->next;

        head = tail->next;
        tail->next = nullptr;

        return head;
    }
};