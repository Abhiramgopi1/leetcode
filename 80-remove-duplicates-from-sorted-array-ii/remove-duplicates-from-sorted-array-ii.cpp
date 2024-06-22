class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int m=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]){
                c++;
                if(c>1){
                    nums[i-1]=INT_MAX;
                    m++;
                }
            }
            else if(nums[i-1]!=nums[i]){
                c=0;
            }
        }
        sort(nums.begin(),nums.end());
        return n-m;
    }
};