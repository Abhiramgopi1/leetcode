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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*>ans;

        int c=0;
        ListNode* t=head;
        while(t){
            t=t->next;
            c++;
        }
        
        int g=c%k;
        t=head;
        ListNode* p=t;
        int j=1;

        if(k>c){
            while(p){
                ListNode* r=new ListNode(p->val);
                ans.push_back(r);
                p=p->next;
            }

            while(ans.size()<k){
                ListNode* r=NULL;
                ans.push_back(r);
            }
        }

        else if(g>0 and g<k){
            while(p and g){
                p=p->next;
                j++;
                if(j==(c/k)+1){
                    ListNode* r=p->next;
                    p->next=NULL;
                    ans.push_back(t);
                    t=r;
                    p=t;
                    j=1;
                    g--;
                }
            }
            if((c/k)==1){
                    while(p){
                    ListNode* r=new ListNode(p->val);
                    ans.push_back(r);
                    p=p->next;
                }
            }
            else{
                while(p){
                    p=p->next;
                    j++;
                    if(j==(c/k)){
                        ListNode* r=p->next;
                        p->next=NULL;
                        ans.push_back(t);
                        t=r;
                        p=t;
                        j=1;
                    }
                }  
            }
        }

        
        else if(g==0){
            if((c/k)==1){
                    while(p){
                    ListNode* r=new ListNode(p->val);
                    ans.push_back(r);
                    p=p->next;
                }
            }
            else{
                while(p){
                    p=p->next;
                    j++;
                    if(j==(c/k)){
                        ListNode* r=p->next;
                        p->next=NULL;
                        ans.push_back(t);
                        t=r;
                        p=t;
                        j=1;
                    }
                }  
            }
        }

        

        
        return ans;
    }
};