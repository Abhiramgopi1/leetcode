class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        int n=nums.size();
        vector<int>v;
        for(auto i: mp){
            if(i.second>(n/3)){
                v.push_back(i.first);
            }
        }
        return v;
    }
};