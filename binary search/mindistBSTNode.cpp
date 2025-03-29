/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// inorder traversal
#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution
{
public:
    int minDiffInBST(TreeNode *root)
    {
        int ans = INT_MAX;
        inorder(root, ans);
        return ans;
    }

private:
    int pred = -1;
    void inorder(TreeNode *root, int &ans)
    {
        if (root == nullptr)
            return;
        inorder(root->left, ans);
        if (pred >= 0)
            ans = min(ans, root->val - pred);
        pred = root->val;
        inorder(root->right, ans);
    }
};

int main(){
    // Example usage of the Solution class
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    Solution sol;
    int minDiff = sol.minDiffInBST(root);
    cout << "Minimum difference in BST: " << minDiff << endl;

    return 0;
}