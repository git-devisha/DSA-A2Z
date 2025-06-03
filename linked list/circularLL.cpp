#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
public:
    bool cycle(ListNode *head)
    {
        ListNode *tortoise = head;
        ListNode *rabbit = head;
        // tortoise hare algo
        while (rabbit != nullptr && rabbit->next != nullptr)
        {
            tortoise = tortoise->next;
            rabbit = rabbit->next->next;
            if (tortoise == rabbit)
            {
                return true; // cycle detected
            }
        }
        return false;
    }
};

int main()
{
    // Example usage
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = head; // Creating a cycle for testing

    Solution sol;
    if (sol.cycle(head))
        cout << "Cycle detected in the linked list." << endl;
    else
        cout << "No cycle detected in the linked list." << endl;

    return 0;
}