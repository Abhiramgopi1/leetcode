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
    ListNode* oddEvenList(ListNode* head){
        ListNode* odd=new ListNode(-1);
        ListNode* l1=odd;
        ListNode* even=new ListNode(-1);
        ListNode* l2=even;
        int i=1;
        while(head!=NULL){
            if(i%2!=0){
                l1->next=new ListNode(head->val);
                l1=l1->next;
            }
            else{
                l2->next=new ListNode(head->val);
                l2=l2->next;
            }
            i++;
            head=head->next;
        }
        odd=odd->next;
        even=even->next;
        l1->next=even;

        return odd;
       
    }
};