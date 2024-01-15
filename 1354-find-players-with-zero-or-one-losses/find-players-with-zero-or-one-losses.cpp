class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        map<int,int>mp1;
        map<int,int>mp2;
        for(auto i : matches){
            for(auto j: i){
                mp1[j]++;

            }
        }

        for(int i=0;i<matches.size();i++){
            mp2[matches[i][1]]++;
        }
        vector<int>v1;
        vector<int>v2;

        for(auto i: mp1){
            int k=mp2[i.first];
            if(k==0) v1.push_back(i.first);
        }
        for(auto i : mp2){
            int k=mp1[i.first];
            if((i.second==1) and k!=0){
                v2.push_back(i.first);
            }
        }
        ans.push_back(v1);
        ans.push_back(v2);

        return ans;
        
    }
};