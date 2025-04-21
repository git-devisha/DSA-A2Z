#include <bits/stdc++.h>
using namespace std;
class treenode
{
public:
    int data;
    treenode *left;
    treenode *right;
    treenode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
// time complexity O(n) and space complexity O(n)

bool preorder(treenode *root, treenode *node, vector<string> &traversalist)
{
    if (root == nullptr)
        return false;
    traversalist.push_back(to_string(root->data));
    if (root->data == node->data)
        return true;
    if (preorder(root->left, node, traversalist) || preorder(root->right, node, traversalist))
        return true;
    traversalist.pop_back();
    return false;
}
vector<string> paths(treenode *root, treenode *node)
{
    vector<string> ans;
    if (root == nullptr)
        return ans;
    preorder(root, node, ans);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return ans;
}

int main()
{
    treenode *root = new treenode(1);
    root->left = new treenode(2);
    root->right = new treenode(3);
    root->left->left = new treenode(4);
    root->left->right = new treenode(5);
    root->right->left = new treenode(6);
    root->right->right = new treenode(7);
    treenode *node = root->left->right; // node with value 5
    vector<string> result = paths(root, node);
    return 0;
}
