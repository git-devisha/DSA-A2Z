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

void preorder(node *root)
{
    stack<node *> st;
    while (root != NULL || st.empty())
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            st.push(root);
            root = root->left;
        }
        else
        {
            root = st.top();
            st.pop();
            root = root->right;
        }
    }
}

void inorder(node *root)
{
    stack<node *> st;
    while (root != NULL || !st.empty())
    {
        if (root != NULL)
        {
            st.push(root);
            root = root->left;
        }
        else
        {
            root = st.top();
            cout << root->data;
            // null
            st.pop();
            root = root->right;
        }
    }
}

vector<int> postorder(node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    stack<node *> st1, st2;
    st1.push(root);
    while (!st1.empty())
    {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if (root->left != NULL)
            st1.push(root->left);
        if (root->right != NULL)
            st1.push(root->right);
    }
    while (!st2.empty())
    {
        node *element = st2.top();
        ans.push_back(element->data);
        st2.pop();
    }
    return ans;
}

int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    vector<int> postOrderResult = postorder(root);
    for (int i : postOrderResult)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}