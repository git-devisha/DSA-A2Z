#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int data1, ListNode *next1)
    {
        data = data1;
        next = next1;
    }
    ListNode(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void print(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode *deletenode(ListNode *head, int n)
{
    if (head == nullptr)
        return nullptr;

    int count = 0;
    ListNode *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    if (count == n)
    {
        ListNode *newHead = head->next;
        delete head;
        return newHead;
    }

    int pos = count - n;
    temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    ListNode *delNode = temp->next;
    temp->next = temp->next->next;
    delete delNode;
    return head;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int n = 2; // Remove the 2nd node from the end
    head = deletenode(head, n);

    print(head); // Print the modified linked list

    return 0;
}