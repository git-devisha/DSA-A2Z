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
int search(Node *head, int key)
{
    int index = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == key)
        {

            return index;
            index++;
            temp->next;
        }
        else
        {
            index++;
            temp = temp->next;
        }
    }
};

int main()
{
    vector<int> arr = {2, 3, 5, 6};
    // create linked list
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);
    int key = 5;
    int index = search(head, key);
    if (index != -1)
    {
        cout << "Element found at index: " << index << endl; // should return 2
    }
    else
    {
        cout << "Element not found in the linked list." << endl;
    }
}