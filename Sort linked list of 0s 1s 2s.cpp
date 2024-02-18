/* Given a linked list of 'N' nodes, where each node has an integer value that can be 0, 1, or 2. You need to sort the linked list in non-decreasing order and the return the head of the sorted list.
Example:
Given linked list is 1 -> 0 -> 2 -> 1 -> 2. 
The sorted list for the given linked list will be 0 -> 1 -> 1 -> 2 -> 2.   */

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    int cnt0 =0 , cnt1 =0 , cnt2= 0;
    Node* temp = head;
    while(temp){
        if(temp->data == 0) cnt0++;
        else if(temp->data == 1) cnt1++;
        else if(temp->data == 2) cnt2++;
        temp = temp->next;
    }

    temp = head;
    while(temp){
        if(cnt0){
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1){
            temp->data = 1;
            cnt1--;
        }
        else if(cnt2){
            temp->data = 2;
            cnt2--;
        }
        temp= temp->next;
    }
    return head;
}
