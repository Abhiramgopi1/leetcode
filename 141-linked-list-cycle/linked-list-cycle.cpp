/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode *temp=head;
        map<int,int>mp;
        int c=0;
        while(temp->next!=NULL){
            int k=temp->val;
            int l=temp->next->val;
            mp[k]++;
            temp=temp->next;
            if(mp[l]>=5){
                return true;
                break;
            }
        }
        return false;
        
    }
};