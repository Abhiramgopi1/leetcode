class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        vector<int>v1;
        vector<int>ans;
        for(auto it: nums){
            if(it>0) v.push_back(it);
        }
        for(auto it: nums){
            if(it<0) v1.push_back(it);
        }
        int i=0;
        int j=0;
        int m=v.size();
        int p=v1.size();
        while(i<m and j<p){
            ans.push_back(v[i]);
            ans.push_back(v1[j]);
            i++;
            j++;
        }
        return ans;
        
    }
};