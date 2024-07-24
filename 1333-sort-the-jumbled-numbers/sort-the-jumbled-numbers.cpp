class Solution {
public:
    vector<int> sortJumbled(vector<int>&mapping, vector<int>& nums) {
        vector<pair<int,int>>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            int l=0;
            for(auto i: s){
                int a=i-'0';
                l=l*10+mapping[a];
            }
            mp.push_back({l,i});
        }

        sort(mp.begin(),mp.end());
        vector<int>a;
        for(auto i: mp){
            int k=i.second;
            a.push_back(nums[k]);
        }
        return a;
    }
};