#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }

    int max_count = 0, current_count = 0;
    for (char c : binary)
    {
        if (c == '1')
        {
            current_count++;
            max_count = max(max_count, current_count);
        }
        else
        {
            current_count = 0;
        }
    }

    cout << max_count << endl;

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}