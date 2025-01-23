#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list use doubly linked list mechanism under the hood
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5);    //{5, 2, 4}
    ls.emplace_front(6); //{6, 5, 2, 4}

    ls.pop_back();  //{6, 5, 2}
    ls.pop_front(); //{5, 2}

    for (int value : ls)
    {
        cout << value << " ";
    }
    cout << endl;

    // rest functions same as vector
    // begin, end, clear, insert, size, swap

    return 0;
}