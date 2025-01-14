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
    int dfs(TreeNode *root, bool isLeft)
    {
        if (root == nullptr)
            return 0;

        if (!root->left && !root->right && isLeft)
        {
            return root->val;
        }

        int left = dfs(root->left, true);
        int right = dfs(root->right, false);

        return left + right;
    }
    int sumOfLeftLeaves(TreeNode *root)
    {
        return dfs(root, false);
    }
};