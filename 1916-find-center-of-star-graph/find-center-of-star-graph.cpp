class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        int n=edges.size();
        for(int i=0;i<2;i++){
            for(int j=0;j<edges[0].size();j++){
                mp[edges[i][j]]++;
            }
        }
        for(auto i: mp){
            if(i.second==2){
                return i.first;
            }
        }
        return 0;
    }
};