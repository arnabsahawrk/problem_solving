//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User code template

class Solution
{
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr)
    {

        int f = -1, c = INT_MAX;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == x)
                return {arr[i], arr[i]};
            else if (arr[i] < x)
                f = max(f, arr[i]);
            else
                c = min(c, arr[i]);
        }

        if (c == INT_MAX)
            c = -1;

        return {f, c};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--)
    {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends