class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1="",s2="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(i<n/2){
                s1+=s[i];
            }
            else{
                s2+=s[i];
            }
        }
        int c=0,d=0;
        for(auto i:s1){
            if(i=='a' || i=='e' || i=='o' || i=='u'|| i=='i' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                 c++;
            }
        }
         for(auto i:s2){
            if(i=='a' || i=='e' || i=='o' || i=='u'|| i=='i' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U'){
                 d++;
            }
        }
        if(c==d) return true;
        else return false;
    }
};