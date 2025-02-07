class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>mp;
        unordered_map<int,int>mp1;
        vector<int>ans;
        for(auto i: queries){
            int ball=i[0];
            int color=i[1];
            if(mp1[ball]!=0){
                int c=mp1[ball];
                if(mp[c]==1){
                    mp.erase(c);
                }
                else {
                    mp[c]--;
                }
                mp1[ball]=color;
                mp[color]++;
            }
            else{
                mp1[ball]=color;
                mp[color]++;
            }

            ans.push_back(mp.size());
        }
        return ans;
    }
};