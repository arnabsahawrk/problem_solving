#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    string str;
    cin >> str;

    while (q--)
    {
        string op;
        cin >> op;

        if (op == "pop_back")
        {
            str.pop_back();
        }
        else if (op == "front")
        {
            cout << str.front() << endl;
        }
        else if (op == "back")
        {
            cout << str.back() << endl;
        }
        else if (op == "sort")
        {
            int l, r;
            cin >> l >> r;

            if (l > r)
                swap(l, r);

            sort(str.begin() + l - 1, str.begin() + r);
        }
        else if (op == "reverse")
        {
            int l, r;
            cin >> l >> r;

            if (l > r)
                swap(l, r);

            reverse(str.begin() + l - 1, str.begin() + r);
        }
        else if (op == "print")
        {
            int pos;
            cin >> pos;
            cout << str[pos - 1] << endl;
        }
        else if (op == "substr")
        {
            int l, r;
            cin >> l >> r;

            if (l > r)
                swap(l, r);

            string s = str.substr(l - 1, (r - l) + 1);

            cout << s << endl;
        }
        else
        {
            char x;
            cin >> x;

            str.push_back(x);
        }
    }

    return 0;
}