#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
int lengthLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    vector<int> arr = {2, 3, 5, 6};
    // create linked list
    int count = lengthLL(nullptr); // should return 0 for an empty list
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    if (head == nullptr)
        return count;
    cout << "Length of linked list: " << lengthLL(head) << endl; // should return 3
    // clean up memory
}