#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st, st2;

    int t;
    cin >> t;

    while (t--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int x;
            cin >> x;

            st.push(x);
        }
        else if (type == 2)
        {
            int val;
            if (!st2.empty())
            {
                val = st2.top();
                st2.pop();
            }
            else
            {
                while (!st.empty())
                {
                    st2.push(st.top());
                    st.pop();
                }

                val = st2.top();
                st2.pop();
            }
        }
        else
        {
            int val;
            if (!st2.empty())
            {
                val = st2.top();
            }
            else
            {
                while (!st.empty())
                {
                    st2.push(st.top());
                    st.pop();
                }

                val = st2.top();
            }

            cout << val << endl;
        }
    }
    return 0;
}
