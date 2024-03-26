class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=1;
        sort(nums.begin(),nums.end());
        for(auto it: nums){
            if(it==i) i++;
        }
        return i;
        
    }
};