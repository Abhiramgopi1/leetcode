class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string>mp;
        int n=names.size();
        for(int i=0;i<n;i++){
            string s=names[i];
            int k=heights[i];
            mp[k]=s;
        }
        sort(heights.rbegin(),heights.rend());
        vector<string>ans;
        for(auto i: heights){
            ans.push_back(mp[i]);
        }
        return ans;
    }
};