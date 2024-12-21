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

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

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

int size_of_LL(Node *node)
{
    int count = 0;
    while (node != nullptr)
    {
        count++;
        node = node->next;
    }

    return count;
}

void delete_at_head(Node *&head, Node *&tail)
{
    if (head == nullptr)
        return;

    Node *deleteNode = head;

    if (head == tail)
    {
        head = nullptr;
        tail = nullptr;
    }
    else
    {
        head = head->next;
    }
    delete deleteNode;
}

void delete_at_index(Node *&head, Node *&tail, int idx)
{
    if (head == nullptr)
        return;

    Node *temp = head;

    while (temp != nullptr && --idx)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    if (deleteNode == tail)
    {
        temp->next = nullptr;
        tail = temp;
    }
    else
    {
        temp->next = deleteNode->next;
    }

    delete deleteNode;
}

int main()
{
    Node *head = nullptr, *tail = nullptr;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            int size = size_of_LL(head);
            if (v < size)
            {
                if (v == 0)
                {
                    delete_at_head(head, tail);
                }
                else
                {
                    delete_at_index(head, tail, v);
                }
            }
        }
        display(head);
    }

    return 0;
}