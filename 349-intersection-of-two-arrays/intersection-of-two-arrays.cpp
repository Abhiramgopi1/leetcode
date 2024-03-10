class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        map<int,int>mp;
        for(auto i: n1){
            mp[i]++;
        }
        vector<int>v;
        map<int,int>mp1;
        for(int i=0;i<n2.size();i++){
            if(mp[n2[i]]!=0 and mp1[n2[i]]==0){
                v.push_back(n2[i]);
                mp1[n2[i]]++;
            }
        }
        return v;
        
    }
};