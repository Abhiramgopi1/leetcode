class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.size();
        map<char,int>mp;
        for(auto i: s){
            mp[i]++;
        }
        int c=0;
        for(auto it: mp){
            char a=it.first;
            int b=it.second;
            if(b>1){
                int i=-1,j=-1;
                for(int k=0;k<n;k++){
                    if(a==s[k]) {
                        if(i==-1) i=k;
                        j=k;
                    }
                }
                
                set<char>st;
                for(int t=i+1;t<j;t++){
                    st.insert(s[t]);
                }
                c+=st.size();
            }
        }
        return c;
    }
};