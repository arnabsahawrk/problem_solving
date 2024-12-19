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
    void insertTail(ListNode *&head, ListNode *&tail, int value)
    {
        ListNode *newNode = new ListNode(value);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }
    void recursiveList(ListNode *&head, ListNode *&tail, ListNode *temp)
    {
        if (temp == nullptr)
            return;

        recursiveList(head, tail, temp->next);
        insertTail(head, tail, temp->val);
    }
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode *newHead = nullptr, *tail = nullptr;

        recursiveList(newHead, tail, head);

        return newHead;
    }
};