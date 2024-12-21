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

int search(Node *node, int x)
{
    if (node == nullptr)
    {
        return -1;
    }

    int foundedIndex = 0;
    while (node)
    {
        if (node->value == x)
        {
            return foundedIndex;
        }
        foundedIndex++;
        node = node->next;
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = nullptr, *tail = nullptr;

        int val;
        while (cin >> val && val != -1)
        {
            insert_at_tail(head, tail, val);
        }
        int x;
        cin >> x;
        cout << search(head, x) << endl;
    }

    return 0;
}