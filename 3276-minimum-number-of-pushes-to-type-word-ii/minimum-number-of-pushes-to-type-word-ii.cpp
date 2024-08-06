class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(auto i: word){
            mp[i]++;
        }

        vector<int>v;

        for(auto i: mp){
            v.push_back(i.second);
        } 

        sort(v.rbegin(),v.rend());

        int j=0,p=1,c=0;
        for(auto i: v){
            c+=p*i;
            j++;
            if(j==8) p=2;
            if(j==16) p=3;
            if(j==24) p=4;
        }

        return c;
    }
};