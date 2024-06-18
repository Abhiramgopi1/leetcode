class Solution {
public:
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& w) {
        unordered_map<int,int>mp;
        for(int i=0;i<d.size();i++){
            mp[d[i]]=max(mp[d[i]],p[i]);
        }
        sort(d.begin(),d.end());
        sort(w.begin(),w.end());
        int j=0,m=0,c=0;
        for(int i=0;i<w.size();i++){
            while(w[i]>=d[j] and j<d.size()){
                m=max(m,mp[d[j]]);
                j++;
            }
            c+=m;

        }
        return c;
    }
};