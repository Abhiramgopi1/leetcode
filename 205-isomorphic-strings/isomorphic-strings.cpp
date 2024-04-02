class Solution {
public:
    bool isIsomorphic(string s, string t) {
       for(int i=0;i<s.length();i++){
            char a=s[i];
            char b=t[i];
            for(int j=i;j<s.length();j++){
                if(s[j]!=a and t[j]==b) return false;
                else if(s[j]==a and t[j]!=b) return false;
            }
       }
       return true;
        
    }
};