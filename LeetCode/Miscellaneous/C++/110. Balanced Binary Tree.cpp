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
    bool isBalanced(TreeNode *root)
    {
        return dfsHeight(root) != -1;
    }

private:
    int dfsHeight(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int l = dfsHeight(root->left);
        int r = dfsHeight(root->right);

        if (l == -1 || r == -1)
            return -1;
        if (abs(l - r) > 1)
            return -1;

        return max(l, r) + 1;
    }
};