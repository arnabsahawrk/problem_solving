//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    bool armstrongNumber(int n)
    {
        int sum = 0;
        int temp = n;

        while (temp != 0)
        {
            int mod = temp % 10;
            sum = sum + (mod * mod * mod);
            temp /= 10;
        }

        if (sum == n)
            return true;
        else
            return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends