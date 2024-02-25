/*APPROACH 1 */
class Solution {
public:
int length(ListNode*head){
    int cnt=0;
    ListNode* temp = head;
    while(temp){
        cnt++;
        temp= temp->next ;
    }
    return cnt;
}

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);

        if(len==n){
            return head->next;
        }

        int res= len-n;
        ListNode*temp = head;
        while(temp->next){
            res--;
            if(res==0){
                break;
            }
            temp= temp->next;
        }

        ListNode* delnode= temp->next;
        temp->next = temp->next->next;
        delete(delnode);
        return head;
    }
};

/* APPROACH 2 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow= head;
        ListNode* fast = head;
        for(int i=0;i<n;i++){
            fast= fast->next;
        }

        if(fast==NULL){
            return head->next;
        }

        while(fast->next){
            fast= fast->next;
            slow= slow->next;
        }
        ListNode* delnode = slow->next;
        slow->next= slow->next->next;
        delete(delnode);

        return head;
    }
};
