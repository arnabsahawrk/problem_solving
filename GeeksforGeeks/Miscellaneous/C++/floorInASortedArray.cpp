//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int findFloor(vector<int> &arr, int k)
    {

        int start = 0, end = arr.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (arr[mid] < k)
            {
                start = mid + 1;
            }
            else if (arr[mid] > k)
            {
                if (mid != 0 && arr[mid - 1] <= k)
                    return mid - 1;

                end = mid -1;
            }
            else
            {
                return mid;
            }
        }

        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.findFloor(arr, k);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends