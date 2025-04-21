// recursive traversal of binary tree
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int preorder(node *root)
{
    // root left right
    if (root == nullptr)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}

int inorder(node *root)
{
    // left root right
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}

int postorder(node *root)
{
    // left right root
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}

vector<vector<int>> levelorder(node *root)
{
    // bfs
    vector<vector<int>> ans;
    queue<node *> q;
    q.push(root);
    if (root == nullptr)
        return ans;
    while (!q.empty())
    {
        int n = q.size();
        vector<int> level;
        for (int i = 0; i < n; i++)
        {
            node *newnode = q.front();
            q.pop();
            if (newnode->left != nullptr)
            {
                q.push(newnode->left);
            }
            if (newnode->right != nullptr)
            {
                q.push(newnode->right);
            }
            level.push_back(newnode->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main()
{
    return 0;
}