class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int i=1;
        while(i){
            if(mp[i]==0){
                return i;
            }
            i++;
        }
        return 0;

    }
};