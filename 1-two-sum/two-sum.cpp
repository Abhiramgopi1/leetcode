class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        int f=0;
        vector<int>v;
        for(int i=0;i<n;i++){
            int k=t-nums[i];
            for(int j=0;j<n;j++){
                if(nums[j]==k and i!=j) {
                    f=1;
                    v.push_back(j);
                    break;
                }
            }
            if(f!=0){
                v.push_back(i);
                break;
            }
        }
        return v; 
        
    }
};