#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;

    map<string, int> mp;
    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            string name;
            int marks;
            cin >> name >> marks;

            if (mp.find(name) != mp.end())
                mp[name] = mp[name] + marks;
            else
                mp[name] = marks;
        }
        else if (type == 2)
        {
            string name;
            cin >> name;
            mp[name] = 0;
        }
        else if (type == 3)
        {
            string name;
            cin >> name;
            cout << mp[name] << endl;
        }
    }
    return 0;
}
