// Binary Tree Preorder Traversal
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Direct method of recursion.
    void helper(TreeNode *root, vector<int> &ans)
    {
        if (root == nullptr)
            return;

        ans.push_back(root->val);
        helper(root->left, ans);
        helper(root->right, ans);
    }

    vector<int> preorderTraversalBasic(TreeNode *root)
    {
        vector<int> ans;
        helper(root, ans);
        return ans;
    }

    // Iterative method (while loop) using a stack.
    vector<int> preorderTraversalStack(TreeNode *root)
    {
        vector<int> ans;
        if (root == nullptr)
            return ans;

        stack<TreeNode *> s;
        s.push(root);

        // The logic behind it is simply how we want the output to be -> root.left.right//
        // hence, we accordingly push the elements in a particular order in the stack and get the desired result.
        while (!s.empty())
        {
            root = s.top();
            s.pop();
            ans.push_back(root->val);

            if (root->right != nullptr)
                s.push(root->right);
            if (root->left != nullptr)
                s.push(root->left);
        }
        return ans;
    }
};