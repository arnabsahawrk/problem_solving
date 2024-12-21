#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->next = nullptr;
        this->value = value;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (tail == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int get_difference(Node *node)
{
    if (node == nullptr)
        return -1;

    int maxValue = node->value, minValue = node->value;

    while (node->next != nullptr)
    {
        node = node->next;
        if (maxValue < node->value)
        {
            maxValue = max(maxValue, node->value);
        }
        else if (minValue > node->value)
        {
            minValue = min(minValue, node->value);
        }
    }

    return maxValue - minValue;
}

int main()
{
    Node *head = nullptr, *tail = nullptr;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    cout << get_difference(head);

    return 0;
}