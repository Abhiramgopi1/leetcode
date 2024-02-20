class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int>mp;
        int k=0;
        for(auto i: nums){
            mp[i]++;
            k++;
        }
        int i=1;
        while(i<=k){
            if(mp[i]==0){
                return i;
            }
            i++;
        }
        return 0;
    }
};