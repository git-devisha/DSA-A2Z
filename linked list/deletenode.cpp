#include <bits/stdc++.h>
using namespace std;

// Definition of the Node structure
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};

void deletenode(Node *node)
{
    // Copy the data from the next node to the current node
    node->data = node->next->data;

    // Store the next node in a temporary variable
    Node *temp = node->next;

    // Update the next pointer of the current node to skip the next node
    node->next = node->next->next;

    // Delete the next node
    delete temp;
}

int main()
{
    // Create a linked list for testing
    Node *head = new Node(2);
    head->next = new Node(1);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    //  original linked list 1234
    // Delete the second node (value 2)
    deletenode(head->next);

    // inserting a new node at head of LL
    // Node* inserthead(Node* head, int val){
    //     Node* temp= new Node(val, head);
    //     return temp;
    // }
    // head= insertHead(head, val);

    // Print the modified linked list
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}