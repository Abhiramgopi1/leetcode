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
    ListNode *getIntersectionNode(ListNode *l1, ListNode *l2) {
        unordered_map<ListNode*,int>mp;
        while(l2){
            mp[l2]++;
            l2=l2->next;
        }
        while(l1!=NULL){
            if(mp[l1]!=0) return l1;
            l1=l1->next;
        }
        return NULL;
    }
};