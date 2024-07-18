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
    ListNode* rev(ListNode* head){
        ListNode* next=NULL;
        ListNode* cur=head;
        ListNode* prev=NULL;
        while(cur!=NULL){
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL) return NULL;
        ListNode* ans=head;
        if(n==1){
            while(ans->next->next!=NULL){
                ans=ans->next;
            }
            ans->next=NULL;
            return head; 
        }
        ans=rev(ans);
        ListNode* ptr=ans;
        while(ptr!=NULL and n>2){
            n--;
            ptr=ptr->next;
        }
        ListNode* deleNode=ptr->next;
        ptr->next=deleNode->next;
        delete (deleNode);
        ans=rev(ans);
        return ans;
        
    }
};