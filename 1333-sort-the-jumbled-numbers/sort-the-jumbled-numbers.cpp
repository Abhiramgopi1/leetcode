class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,vector<int>>mp;
        for(auto i: nums){
            string s=to_string(i);
            int l=0;
            for(auto i: s){
                int a=i-'0';
                l=l*10+mapping[a];
            }
            mp[l].push_back(i);

        }
        vector<int>a;
        

        for(auto i: mp){
            for(auto j: i.second){
                a.push_back(j);
            }
        }
        return a;
    }
};