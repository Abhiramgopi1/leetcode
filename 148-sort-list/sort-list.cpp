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
    ListNode* ms(ListNode* l1, ListNode* l2){
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        while(l1!=NULL and l2!=NULL){
            if(l1->val<l2->val){
                temp->next=l1;
                temp=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                temp=l2;
                l2=l2->next;
            }
        }
        if(l1) temp->next=l1;
        else temp->next=l2;
        ans=ans->next;
        return ans;
    }
    ListNode* mid(ListNode* head){
         if (!head || !head->next) return head;
        ListNode* slow=head;
        ListNode* fast=head->next->next;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode* middle=mid(head);
        ListNode* right=middle->next;
        middle->next=NULL;
        ListNode* left=head;

        left=sortList(left);
        right=sortList(right);

        return ms(left,right);
         
    }
};