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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode(-1);
        ListNode* ptr=ans;
        int c=0;
        while(l1!=NULL || l2!=NULL){
            int sum=c;
            if(l1) sum+=l1->val;
            if(l2) sum+=l2->val;
            c=sum/10;
            ptr->next=new ListNode(sum%10);
            ptr=ptr->next;
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        if(c!=0) ptr->next=new ListNode(c);
        ans=ans->next;
        return ans;
        
    }
};