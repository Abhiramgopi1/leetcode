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
    ListNode* rever(ListNode* head){
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL) return head;
        if(k==0) return head;
        ListNode* t=head;
        ListNode* p=new ListNode(-1);
        ListNode* pp=p;
        int c=0;
        while(t!=NULL){
            c++;
            pp->next=new ListNode(t->val);
            pp=pp->next;
            t=t->next;
        }
        if(c==k) return head;
        p=p->next;
        int i=k%c;
        int j=0;
        ListNode* t1=rever(p);
        while(t1!=NULL){
            if(i==j){
                break;
            }
            t1=t1->next;
            j++;
        }
        t1=rever(t1);
        if(j==0) return t1;
        // cout<<c<<":"<<j<<endl;
        int l=1;
        ListNode* d1=rever(head);
        ListNode* t2=d1;
        while(t2!=NULL){
            if(l==j){
                t2->next=NULL;
            }
            t2=t2->next;
            l++;
        }

        d1=rever(d1);
        
        ListNode* tr=d1;
        while(tr->next!=NULL){
            tr=tr->next;
        }

        if(t1)tr->next=t1;

        return d1;
    }
};