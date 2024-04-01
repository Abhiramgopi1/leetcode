class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>v;
        int n=s.length();
        string s1="";
        for(int i=0;i<n;i++){
            if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z') ){
                s1+=s[i];
            }
            else{
                if(s1!="") v.push_back(s1);
                s1="";
            }
        } 
        if(s1!="")  v.push_back(s1);
        // for(auto i: v){
        //     cout<<i<<endl;
        // }
        int k=v.size();
        int l=v[k-1].length();
        return l;
    }
};