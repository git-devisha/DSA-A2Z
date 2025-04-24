/*use stack with LIFO
 Reset the temp pointer back to the head of the list
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }
};

Node *arr2dll(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *reverseDLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        prev = temp->back;
        temp->back = temp->next;
        temp->next = prev;
        temp = temp->back;
    }
    return prev->back;
}

int main()
{
    vector<int> arr = {12, 4, 6, 8, 13, 2, 67};
    Node *head = arr2dll(arr);
    cout << "Original DLL: ";
    print(head);
    cout << "after reversing: " << endl;
    head = reverseDLL(head);
    print(head);
    return 0;
}