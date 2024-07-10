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
        ListNode *t=head;
        int c=0;
        while(t){
            c++;
            if(c>10000) return true;
            t=t->next;
        }
        return false;
        
    }
};