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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        sort(v.begin(),v.end());

        ListNode* ans=new ListNode(-1);
        ListNode* ptr=ans;

        for(int i=0;i<v.size();i++){
            ptr->next=new ListNode(v[i]);
            ptr=ptr->next;
        }

        ans=ans->next;
        return ans;
        
    }
};