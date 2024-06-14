class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int c=0;
        int d=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==0){
                mp[nums[i]]++;
                d=nums[i];
            }
            else{
                int k=d+1;
                mp[k]++;
                c+=k-nums[i];
                d=k;
            }
        }
        return c;
    }
};