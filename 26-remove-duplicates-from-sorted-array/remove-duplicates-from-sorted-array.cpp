class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                nums[i-1]=INT_MAX;
                c++;
            }
        }
        sort(nums.begin(),nums.end());
        return n-c;

    }
};