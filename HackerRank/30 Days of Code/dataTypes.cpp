#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int secondI;
    double secondD;
    string secondS;

    // Read and save an integer, double, and String to your variables.
    cin >> secondI >> secondD;
    cin.ignore();
    getline(cin, secondS);

    // Print the sum of both integer variables on a new line.
    cout << secondI + i << endl;

    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << secondD + d << endl;

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + secondS << endl;

    return 0;
}