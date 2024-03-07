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
        vector<int>v;
        vector<int>v1;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0;i<n;i++){
            if(i>=n/2){
                v1.push_back(v[i]);
            }
        }
        ListNode* head1=NULL;
        for(int i=v1.size()-1;i>=0;i--){
            ListNode* t= new ListNode;
            t->val=v1[i];
            t->next= head1;
            head1=t;
        }
        return head1;
    }
};