"In this file, we have defined a Node class to represent a linked list. Additionally, we have converted an array into a linked list using the provided class and successfully traversed the linked list."
Algorithm : 
1.Define Node Class:
Create a class named Node with an integer data field and a pointer to the next node.
Include constructors for initializing the node with and without data.
Create Linked List from Array:

2.Define a function createLL that takes a vector of integers as input.
Initialize the head of the linked list with the first element of the array.
Iterate through the array, creating new nodes for each element and linking them together.
Traverse Linked List:

3.Define a function traversing that takes the head of the linked list as input.
Traverse the linked list, printing the data of each node.
In the Main Function:

4.Initialize a vector with the array elements.
Call the createLL function to convert the array into a linked list.
Call the traversing function to print the linked list.

Code :
#include<bits/stdc++.h> 
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    public:
    Node(){
        data= 0;
        next= nullptr;
    }
    
    public:
    Node(int data1){
        data= data1;
        next= nullptr;
    }
    
    public:
    Node(int data1, Node* next1){
        data= data1;
        next = next1;
    }
};

Node* createLL(vector<int> &a){
    Node* head= new Node(a[0]);
    Node* mover= head;
    for(int i=1;i<a.size();i++){
        Node*temp = new Node (a[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void traversing(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> a= {4,5,7,8,9};
   Node* head = createLL(a);
    traversing(head);
    return 0;
    
}
