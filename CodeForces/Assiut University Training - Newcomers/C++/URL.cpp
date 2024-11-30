#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int questionMarks = str.find('?');
    str.erase(str.begin(), str.begin() + questionMarks + 1);

    vector<string> parameters;
    string parameter;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '=')
            parameter += ": ";
        else if (str[i] == '&')
        {
            parameters.push_back(parameter);
            parameter = "";
        }
        else
            parameter += str[i];
    }
    parameters.push_back(parameter);

    for (string param : parameters)
        cout << param << endl;
    return 0;
}