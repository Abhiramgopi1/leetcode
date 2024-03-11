class Solution {
public:
    string customSortString(string order, string s) {
        string s1="";
        map<char,int>mp;
        map<char,int>mp2;
        for(int i=0;i<order.length();i++){
            mp2[order[i]]++;
        }
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<order.length();i++){
            char c=order[i];
            int l=mp[c];
            if(mp[c]!=0){
                while(l--){
                s1+=c;
                }
            }
        }

        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(mp2[c]==0) s1+=c;
        }
        
        return s1;
        
    }
};