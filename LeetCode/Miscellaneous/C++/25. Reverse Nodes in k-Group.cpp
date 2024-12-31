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
    ListNode *findKthNode(ListNode *node, int k)
    {
        while (node != nullptr && --k)
        {
            node = node->next;
        }

        return node;
    }
    void reverseLL(ListNode *node, ListNode *temp)
    {
        if (temp->next == nullptr)
        {
            return;
        }
        reverseLL(node, temp->next);
        temp->next->next = temp;
        temp->next = nullptr;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        ListNode *temp = head, *nextNode = nullptr, *prevNode = nullptr;

        while (temp != nullptr)
        {
            ListNode *kthNode = findKthNode(temp, k);

            if (kthNode == nullptr)
            {
                if (prevNode)
                    prevNode->next = temp;
                break;
            };

            nextNode = kthNode->next;
            kthNode->next = nullptr;

            reverseLL(temp, temp);

            if (head == temp)
            {
                head = kthNode;
            }
            else
            {
                prevNode->next = kthNode;
            }

            prevNode = temp;
            temp = nextNode;
        }

        return head;
    }
};