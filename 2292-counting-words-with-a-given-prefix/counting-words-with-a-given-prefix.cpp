class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(auto it: words){
            string s=it;
            int i=0,n=pref.size();
            while(i<n){
                if(s[i]!=pref[i]) break;
                else i++;
            }
            if(i==n) ans+=1;
        }
        return ans;
    }
};