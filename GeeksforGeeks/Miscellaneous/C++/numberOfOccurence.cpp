//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int binarySearchFirst(vector<int> &a, int x)
    {
        int first = -1, start = 0, end = a.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (a[mid] < x)
            {
                start = mid + 1;
            }
            else if (a[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                first = mid;
                end = mid - 1;
            }
        }

        return first;
    }

    int binarySearchSecond(vector<int> &a, int x)
    {
        int second = -1, start = 0, end = a.size() - 1;

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (a[mid] < x)
            {
                start = mid + 1;
            }
            else if (a[mid] > x)
            {
                end = mid - 1;
            }
            else
            {
                second = mid;
                start = mid + 1;
            }
        }

        if (second != -1)
            second++;

        return second;
    }
    int countFreq(vector<int> &arr, int target)
    {
        int firstIndex = binarySearchFirst(arr, target);
        int secondIndex = binarySearchSecond(arr, target);

        return secondIndex - firstIndex;
    }
};

//{ Driver Code Starts.

int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number)
        {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends