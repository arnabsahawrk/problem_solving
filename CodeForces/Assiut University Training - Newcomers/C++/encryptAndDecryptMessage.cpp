#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    string message;
    cin >> message;

    string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    string thePassword;
    if (s == 1)
    {
        for (int i = 0; i < message.size(); i++)
        {
            int idx = Original.find(message[i]);
            thePassword += Key[idx];
        }
    }
    else
    {
        for (int i = 0; i < message.size(); i++)
        {
            int idx = Key.find(message[i]);
            thePassword += Original[idx];
        }
    }

    cout << thePassword;
    return 0;
}