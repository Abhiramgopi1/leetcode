class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       int i=1;
       sort(nums.begin(),nums.end());
       for(auto j: nums){
           if(i==j) i++;
       }
       return i;

    }
};