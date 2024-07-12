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
    ListNode *ans = NULL , *ptr = NULL;
    void rev(ListNode* head){
        if(head==NULL){
            return ;
        }
        rev(head->next);
        ListNode* t=new ListNode(head->val);
        // cout<<t->val<<" ";
        if(ans==NULL){
            ans=t;
            ptr=ans;
        }
        else{
            ptr->next=t;
            ptr = ptr->next;
        }
        // cout<<ans->val<<" ";
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        rev(head);
        return ans;
        
    }
};