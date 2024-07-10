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
    ListNode* middleNode(ListNode* head) {
       int c=0;
       ListNode* temp=head;
       ListNode* t=head;
       while(temp){
        c++;
        temp=temp->next;
       }

       ListNode* ans=NULL;
       ListNode* t1=ans;
       int k=0;
       while(t){
        if(k>=c/2){
            if(ans==NULL){
                ans=new ListNode(t->val);
                t1=ans;
            }
            else{
                ListNode* te=new ListNode(t->val);
                t1->next=te;
                t1=t1->next;
            }
        }
        k++;
        t=t->next;
       }
       return ans;
    }
};