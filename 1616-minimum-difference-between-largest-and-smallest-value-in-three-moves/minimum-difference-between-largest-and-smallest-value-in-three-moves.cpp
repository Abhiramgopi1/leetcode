class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=4) return 0;
        int m=INT_MAX;
        int c=4;
        for(int i=0;i<=3;i++){
            if(c!=0){
                int a=nums[i];
                int b=nums[n-c];
                m=min(m,b-a);
            }
            c--;
        }
        return m;
        
    }
};