class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& a, int k) {
        map<int,int>mp;
        vector<int>m;
        for(auto i: a){
            mp[i]++;
        }
        for(auto i: mp){
            m.push_back(i.second);
        }
        sort(m.begin(),m.end());
        int c=0;
        for(auto i: m){
            k-=i;
            if(k<0) c++;
        }
        return c;

    }
};