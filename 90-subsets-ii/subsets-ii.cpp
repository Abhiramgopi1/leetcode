class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        
        vector<vector<int>>ans;
        int p=pow(2,n);
        for(int i=0;i<p;i++){
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                if(i& (1<<j)){
                    v.push_back(nums[j]);
                }
            }
            sort(v.begin(),v.end());
            ans.push_back(v);
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
        
    }
};