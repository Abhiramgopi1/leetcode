class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>mp;
        int j=0,c=0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
            while(mp['a']>0 and mp['b']>0 and mp['c']>0){
                c+=s.length()-i;
                mp[s[j]]--;
                j++;
            }
        }
        return c;
    }
};