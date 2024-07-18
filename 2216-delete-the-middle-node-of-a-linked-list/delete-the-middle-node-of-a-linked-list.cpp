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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *ans=head;
        ListNode *ptr=ans;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        while(ptr!=NULL){
            if(ptr->next==slow) break;
            ptr=ptr->next;
        }
        if(slow->next and ptr->next) ptr->next=slow->next;
        else{
            ptr->next=NULL;
        }
        return ans; 



    }
};