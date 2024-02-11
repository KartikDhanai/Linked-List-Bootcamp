Q- Delete Last Node of Doubly Linked List.
solution : 
/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    // Write your code here
    if(head==NULL || head->next==NULL)
    return nullptr;
    Node*temp = head;
    while(temp->next){
        temp=temp->next;
    }
    Node* prev= temp->prev;
    prev->next= nullptr;
    temp->prev= nullptr;
    delete (temp);
    return head;
}
