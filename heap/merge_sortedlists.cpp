#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next= NULL;
    }
};

Node* merge_sortedlists(Node* head1, Node* head2){
    Node* dummy= new Node(0);
    Node* tail= dummy;
    while(head1 != nullptr && head2 != nullptr){
        if(head1->data <= head2->data){
            tail->next = head1;
            head1 = head1->next;
        }
        else{
            tail->next= head2;
            head2= head2->next;
        }
        tail= tail->next;
    }
    if(head1 != nullptr){
        tail-> next= head1;
    }
    else{
        tail->next= head2;
    }
    return dummy->next;
}

Node* merge_k_lists(vector<Node*> &lists){
    Node *result= NULL;
    for( Node *node: arr){
        result= merge_sortedlists(result, node);
    }
    return reuslt;
}

void print(Node* node){
    while(head != nullptr){
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main(){
    vector<Node*> lists;
    lists.push_back(new Node(1));
    lists.push_back(new Node(4));
    lists.push_back(new Node(5));
    lists.push_back(new Node(2));
    lists.push_back(new Node(3));
    
    Node* mergedHead = merge_k_lists(lists);
    print(mergedHead);
    
    return 0;
}