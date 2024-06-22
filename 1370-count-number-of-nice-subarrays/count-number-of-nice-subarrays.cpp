class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int c=0,r=0;
        for(auto i: nums){
            if(i%2!=0){
                c++;
            }
            mp[c]++;
            int p=c-k;
            if(p>=0 and mp[p]!=0){
                r+=mp[p];
            }

        }
        return r;
    }
};