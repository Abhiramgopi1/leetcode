class Solution {
public:
    vector<vector<int>>ans;
    void sub(int idx,vector<int>&nums,vector<int>&ds){
        if(idx==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        sub(idx+1,nums,ds);
        ds.pop_back();
        sub(idx+1,nums,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        sub(0,nums,ds);
        return ans;   
    }
};