class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        string s="";
        if(s1.length()>s2.length()) return 0;
        for(int i=0;i<s1.length();i++) s+=s2[i];
        string s3=s;
        sort(s3.begin(),s3.end());
        if(s3==s1) return 1;
        for(int i=s1.length();i<s2.length();i++){
            string t="";
            for(int it=1;it<s.length();it++){
                t+=s[it];
            }
            t+=s2[i];
            s=t;
            sort(t.begin(),t.end());
            if(s1==t) return 1;
        }
        return 0;
    }
};