class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int k=nums.size();
        map<int,int>mp;
        for(auto i: nums){
            if(i>0) mp[i]++;
        }
        int i=1;
        int c=0;
        while(i<=k){
            if(mp[i]==0){
                return i;
            }
            else{
                i++;
                c++;
            }
        }
        if(c==k) return c+1;
        else return 0;
        
        
    }
};