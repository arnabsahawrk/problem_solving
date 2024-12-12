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

    int hours = stoi(a);

    if (d == "AM" && hours == 12)
    {
        hours = 0;
    }
    else if (d == "PM" && hours != 12)
    {
        hours += 12;
    }

    string formattedHours = (hours < 10) ? "0" + to_string(hours) : to_string(hours);

    return formattedHours + ":" + b + ":" + c;
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
