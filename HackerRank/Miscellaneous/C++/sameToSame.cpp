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

string sameToSame(Node *fHead, Node *sHead)
{
    while (fHead != nullptr && sHead != nullptr)
    {
        if (fHead->value != sHead->value)
        {
            return "NO";
        }

        fHead = fHead->next;
        sHead = sHead->next;
    }

    if (fHead != nullptr || sHead != nullptr)
    {
        return "NO";
    }

    return "YES";
}

int main()
{
    Node *firstHead = nullptr, *firstTail = nullptr, *secondHead = nullptr, *secondTail = nullptr;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(firstHead, firstTail, val);
    }

    while (cin >> val && val != -1)
    {
        insert_at_tail(secondHead, secondTail, val);
    }

    cout << sameToSame(firstHead, secondHead) << endl;

    return 0;
}