class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        int k;
        unordered_map<int,int>mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i: mp){
            if(i.second==2){
                k=i.first;
            }
        }
        int i=1;
        int m;
        while(i){
            if(mp[i]==0){
                m=i;
                break;
            }
            i++;
        }
        v.push_back(k);
        v.push_back(m);
        return v;
    }
};