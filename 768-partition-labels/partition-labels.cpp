class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        int n=s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]=i;
        }
        int i=0;
        vector<int>ans;
        // for(auto i: mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        while(i<n){
            string s1="";
            int k=mp[s[i]];
            while(i<n and i<=k){
                s1+=s[i];
                i++;
            }
            int m=0;
            for(auto i: s1){
                m=max(m,mp[i]);
            }
            while(i<n and i<=m){
                while(i<n and i<=m){
                    s1+=s[i];
                    i++;
                }
                for(auto i: s1){
                    m=max(m,mp[i]);
                }
            }
            ans.push_back(s1.length());
            s1="";
        }
        return ans;
    }
};