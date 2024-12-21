#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
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

void display(Node *node)
{
    while (node != nullptr)
    {
        cout << node->value << " ";
        node = node->next;
    }
    cout << endl;
}

void removeDuplicate(Node *&head, Node *&tail)
{
    if (head == nullptr)
    {
        return;
    }

    Node *temp = head;
    for (Node *i = temp; i != nullptr; i = i->next)
    {
        Node *prev = i;
        for (Node *j = i->next; j != nullptr;)
        {
            if (i->value == j->value)
            {
                Node *deleteNode = j;
                prev->next = j->next;
                if (j == tail)
                {
                    tail = prev;
                }
                j = j->next;
                delete deleteNode;
            }
            else
            {
                prev = prev->next;
                j = j->next;
            }
        }
    }
}

int main()
{
    Node *head = nullptr, *tail = nullptr;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    removeDuplicate(head, tail);
    display(head);

    return 0;
}