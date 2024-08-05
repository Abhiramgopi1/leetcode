class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto i: arr){
            mp[i]++;
        }
        vector<string>v;
        for(auto i: arr){
            if(mp[i]==1) v.push_back(i);
        }
        if(v.size()<k) return "";
        string ans=v[k-1];
        return ans;        

    }
};