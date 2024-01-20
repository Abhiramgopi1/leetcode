class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        int k=INT_MIN;
        for(auto i : mp){
            k=max(k,i.second);
        }
        int m;
        for(auto i: mp){
            if(i.second==k){
                m=i.first;
            }
        }
        return m;
    }
};