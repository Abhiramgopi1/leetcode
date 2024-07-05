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
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        int n=v.size();
        vector<int>ans;
        if(n<3) return {-1,-1};
        for(int i=1;i<n-1;i++){
            if(v[i]<v[i-1] and v[i]<v[i+1]){
                ans.push_back(i+1);
            }
            if(v[i]>v[i-1] and v[i]>v[i+1]){
                ans.push_back(i+1);
            }
        }
        int m=ans.size();
        if(m<=1) return {-1,-1};
        int mi=INT_MAX,ma=ans[m-1]-ans[0];
        for(int i=0;i<ans.size()-1;i++){
            mi=min(mi,ans[i+1]-ans[i]);
        }
        return {mi,ma};

    }
};