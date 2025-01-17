#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int maxPathSum(TreeNode *root)
    {
        int maxSum = INT_MIN;
        maxPath(root, maxSum);
        return maxSum;
    }

private:
    int maxPath(TreeNode *root, int &maxi)
    {
        if (root == nullptr)
            return 0;

        int leftSum = max(0, maxPath(root->left, maxi));
        int rightSum = max(0, maxPath(root->right, maxi));
        maxi = max(maxi, (leftSum + rightSum + root->val));

        return root->val + max(leftSum, rightSum);
    }
};