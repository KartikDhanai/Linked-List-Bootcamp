Problem statement
Given the head of a singly linked list of integers, find and return its length.

Example:
The length of the list is 4. Hence we return 4.
Note:
Exercise caution when dealing with edge cases, such as when the head is NULL. Failing to handle these edge cases appropriately may result in a runtime error in your code.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
3 4 5 2 6 1 9 -1

Sample Output 1 :
7
Explanation of sample input 1 :
The number of nodes in the given linked list is 7.
Hence we return 7.

Sample Input 2 :
10 76 39 -3 2 9 -23 9 -1
Sample Output 2 :
8
Expected Time Complexity:
Try to do this in O(n).
 Constraints :
0 <= N <= 10^5
Time Limit: 1 sec

SOLUTION :
/****************************************************************

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


*****************************************************************/

int length(Node *head)
{
	//Write your code here
    Node* temp= head;
    int count=0;
    while(temp){
        count++;
        temp= temp->next;
    }
    return count;
}
