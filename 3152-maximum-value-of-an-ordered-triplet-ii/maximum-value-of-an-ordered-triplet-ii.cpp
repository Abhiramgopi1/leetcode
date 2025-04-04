class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>max_suffix(n);
        max_suffix[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            max_suffix[i] = max(max_suffix[i+1],nums[i]);
        }

        int max_pre = nums[0];
        long long ans=0;
        for(int i=1;i<n-1;i++){
            ans = max(ans,(1LL*(max_pre - nums[i])) * max_suffix[i+1]);
            max_pre = max(max_pre,nums[i]);
        }

        return ans;

    }
};