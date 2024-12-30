//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> lcmAndGcd(int a, int b)
    {
        int temp1 = a, temp2 = b, gcd, lcm;

        while (a != 0 && b != 0)
        {
            if (a > b)
                a = a % b;
            else
                b = b % a;
        }

        if (a == 0)
            gcd = b;
        else
            gcd = a;

        lcm = (temp1 * temp2) / gcd;

        return {lcm, gcd};
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends