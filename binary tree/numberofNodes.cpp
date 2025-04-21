// number of nodes in an ideal binary tree at ith level of tree
#include <bits/stdc++.h>
using namespace std;

int countnodes(int i)
{
    return pow(2, i - 1);
}

int main()
{
    int i = 5;
    cout << "number of nodes are " << i << " at level" << countnodes(i);
    return 0;
}