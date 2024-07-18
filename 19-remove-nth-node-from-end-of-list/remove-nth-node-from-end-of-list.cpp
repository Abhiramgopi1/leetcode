/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        ListNode* slow=head;
        ListNode* fast=head;
        while(n--){
            fast=fast->next;
            if(fast==NULL) return head->next;
        }

        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }

        ListNode* deleteNode=slow->next;
        slow->next=deleteNode->next;
        delete(deleteNode);

        return head;
        
    }
};