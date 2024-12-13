//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User code template

class Solution
{
public:
    int floor(vector<int> &a, int x)
    {
        int l = 0;
        int r = a.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (a[mid] < x)
                l = mid + 1;
            else if (a[mid] > x)
                r = mid - 1;
            else
                return a[mid];
        }

        if (r == -1)
            return -1;
        else
            return a[r];
    }

    int celi(vector<int> &a, int x)
    {
        int l = 0;
        int r = a.size() - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (a[mid] < x)
                l = mid + 1;
            else if (a[mid] > x)
                r = mid - 1;
            else
                return a[mid];
        }

        if (l == a.size())
            return -1;
        else
            return a[l];
    }

    vector<int> getFloorAndCeil(int x, vector<int> &arr)
    {
        sort(arr.begin(), arr.end());

        int f = floor(arr, x);
        int c = celi(arr, x);

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