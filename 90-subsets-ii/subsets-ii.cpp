class Solution {
public:
    set<vector<int>>subsets(vector<int>&nums){
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){
            vector<int>v;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    v.push_back(nums[j]);
                }
            }
            sort(v.begin(),v.end());
            st.insert(v);
        }
        return st;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st = subsets(nums);
        for(auto i: st){
            vector<int>v;
            for(auto j: i){
                v.push_back(j);
            }
            ans.push_back(v);
        }
        return ans;
    }
};