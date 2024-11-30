#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count = 0;
    string word;

    for (char &ch : str)
    {
        if (!isalpha(ch))
            ch = ' ';
    }

    stringstream ss(str);
    while (ss >> word)
        count++;

    cout << count << endl;

    return 0;
}
