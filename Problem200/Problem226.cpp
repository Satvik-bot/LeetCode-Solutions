// Invert Binary Tree
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root != nullptr)
        {
            TreeNode *temp = new TreeNode();
            temp = root->right;
            root->right = root->left;
            root->left = temp;
            invertTree(root->right);
            invertTree(root->left);
        }
        return root;
    }
};