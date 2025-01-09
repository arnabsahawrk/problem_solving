#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    vector<string> undo_erase;
    vector<int> undo_append;
    string curr;
    vector<int> state;
    for (int i = 0; i < q; i++)
    {
        int ch;
        cin >> ch;
        if (ch == 1)
        {
            string s;
            cin >> s;
            curr.append(s);
            undo_append.push_back(s.size());
            state.push_back(1);
        }
        else if (ch == 2)
        {
            int k;
            cin >> k;
            string temp;
            while (k--)
            {
                temp.push_back(curr.back());
                curr.pop_back();
            }
            reverse(temp.begin(), temp.end());
            undo_erase.push_back(temp);
            state.push_back(2);
        }
        else if (ch == 3)
        {
            int k;
            cin >> k;
            cout << curr[k - 1] << endl;
        }
        else
        {
            int k = state.back();
            state.pop_back();
            if (k == 1)
            {
                int x = undo_append.back();
                undo_append.pop_back();
                while (x--)
                {
                    curr.pop_back();
                }
            }
            else
            {
                curr.append(undo_erase.back());
                undo_erase.pop_back();
            }
        }
    }
}