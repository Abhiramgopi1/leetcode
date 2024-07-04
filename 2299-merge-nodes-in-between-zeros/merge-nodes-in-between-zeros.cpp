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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tem=head;
        vector<int>v;
        int s=0;
        while(tem!=NULL){
            int k=tem->val;
            s+=k;
            if(k==0 and s!=0){
                v.push_back(s);
                s=0;
            }
            tem=tem->next;
        }
        ListNode* ans= new ListNode(v[0]);
        ListNode* temp= ans;
        for(int i=1;i<v.size();i++){
            ListNode* t= new ListNode(v[i]);
            temp->next=t;
            temp=temp->next;
        }
        return ans;
    }
};