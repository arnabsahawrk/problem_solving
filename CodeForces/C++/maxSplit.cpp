#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int count = 0, countL = 0, countR = 0;
    vector<string> balancedString;
    string substring;
    for (char ch : str)
    {
        substring += ch;
        if (ch == 'L')
            countL++;
        else
            countR++;

        if (countL == countR)
        {
            balancedString.push_back(substring);
            substring.clear();
            count++;
        }
    }

    cout << count << endl;

    for (string ch : balancedString)
        cout << ch << endl;
    return 0;
}