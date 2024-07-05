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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v;
        int c=1;
        while(head->next->next){
            int k=head->val;
            head=head->next;
            c++;
            int l=head->val;
            int m=head->next->val;
            if(l<k and l<m) v.push_back(c);
            if(l>k and l>m) v.push_back(c);
        }
        int n=v.size();
        if(n<=1) return {-1,-1};
        int mi=INT_MAX,ma=v[n-1]-v[0];
        for(int i=0;i<n-1;i++){
            mi=min(mi,v[i+1]-v[i]);
        }
        return {mi,ma};

    }
};