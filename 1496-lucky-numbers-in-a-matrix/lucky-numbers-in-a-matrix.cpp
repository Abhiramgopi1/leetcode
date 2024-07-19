class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i: matrix){
            int c=INT_MAX;
            for(auto j: i){
                c=min(c,j);
            }
            mp[c]++;
        }

        for(int i=0;i<matrix[0].size();i++){
            int c=INT_MIN;
            for(int j=0;j<matrix.size();j++){
                c=max(c,matrix[j][i]);
            }
            if(mp[c]!=0) ans.push_back(c);
        }

       
        return ans;
    }
};