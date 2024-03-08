class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            v.push_back(i.second);
        }
        int k=*max_element(v.begin(),v.end());
        int c=0;
        for(auto i: mp){
            if(i.second==k){
                c+=i.second;
            }
        }
        return c;
    }
};