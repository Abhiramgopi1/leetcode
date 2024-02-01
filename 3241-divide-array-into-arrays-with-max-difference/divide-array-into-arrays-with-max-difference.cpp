class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n){
            int j=i+1,m=i+2;
            vector<int>v;
            if((abs(nums[i]-nums[j])<=k) and (abs(nums[j]-nums[m])<=k) and (abs(nums[i]-nums[m])<=k)){
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                v.push_back(nums[m]);
            }
            else{
                return {};
            }
            i=m+1;
            ans.push_back(v);
        }
        return ans;
    }
};