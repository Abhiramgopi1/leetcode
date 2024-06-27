class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        int n=edges.size();
        for(auto i: edges){
            for(auto j: i){
                mp[j]++;
            }
        }
        for(auto i: mp){
            if(i.second==n){
                return i.first;
            }
        }
        return 0;
    }
};