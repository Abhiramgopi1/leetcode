class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v;
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                s1+=s[i];
            }
            else{
                if(s1!="") v.push_back(s1);
                s1="";
            }
        } 
        if(s1!="")  v.push_back(s1);
        int k=v.size();
        int l=v[k-1].length();
        return l;
    }
};