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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *dummyNode = new ListNode(-1);
        ListNode *temp1 = l1, *temp2 = l2, *current = dummyNode;

        int carry = 0;
        while (temp1 || temp2)
        {
            if (temp1 && temp2)
            {
                int sum = temp1->val + temp2->val + carry;
                ListNode *newNode = new ListNode(sum);

                if (sum >= 10)
                {
                    carry = sum / 10;
                    newNode->val = sum % 10;
                }
                else
                {
                    carry = 0;
                }

                temp1 = temp1->next;
                temp2 = temp2->next;
                current->next = newNode;
                current = newNode;
            }
            else
            {
                if (temp1)
                {
                    int sum = temp1->val + carry;
                    ListNode *newNode = new ListNode(sum);

                    if (sum >= 10)
                    {
                        carry = sum / 10;
                        newNode->val = sum % 10;
                    }
                    else
                    {
                        carry = 0;
                    }

                    temp1 = temp1->next;
                    current->next = newNode;
                    current = newNode;
                }
                else
                {
                    int sum = temp2->val + carry;
                    ListNode *newNode = new ListNode(sum);

                    if (sum >= 10)
                    {
                        carry = sum / 10;
                        newNode->val = sum % 10;
                    }
                    else
                    {
                        carry = 0;
                    }

                    temp2 = temp2->next;
                    current->next = newNode;
                    current = newNode;
                }
            }
        }

        if (carry != 0)
        {
            ListNode *newNode = new ListNode(carry);
            current->next = newNode;
        }

        return dummyNode->next;
    }
};