#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> unq;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int numb;
            cin >> numb;
            unq.insert(numb);
        }
        else if (type == 2)
        {
            int numb;
            cin >> numb;
            if (unq.find(numb) != unq.end())
                unq.erase(numb);
        }
        else if (type == 3)
        {
            int numb;
            cin >> numb;
            if (unq.find(numb) != unq.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
