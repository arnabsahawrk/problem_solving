#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    string a = s.substr(0, 2);
    string b = s.substr(3, 2);
    string c = s.substr(6, 2);
    string d = s.substr(8, 2);
    int hours = atoi(a.c_str());
    if (d == "PM")
        hours += 12;

    string temp;
    if (hours == 0)
        temp = "00";
    else
        temp = to_string(hours);
    temp += ":" + b + ":" + c;

    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
